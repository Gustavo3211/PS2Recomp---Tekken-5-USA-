#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FBF48
// Address: 0x2fbf48 - 0x2fc210
void sub_002FBF48_0x2fbf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBF48_0x2fbf48");
#endif

    switch (ctx->pc) {
        case 0x2fbf84u: goto label_2fbf84;
        case 0x2fbf98u: goto label_2fbf98;
        case 0x2fbfb8u: goto label_2fbfb8;
        case 0x2fc000u: goto label_2fc000;
        case 0x2fc02cu: goto label_2fc02c;
        case 0x2fc054u: goto label_2fc054;
        case 0x2fc07cu: goto label_2fc07c;
        case 0x2fc1d8u: goto label_2fc1d8;
        default: break;
    }

    ctx->pc = 0x2fbf48u;

    // 0x2fbf48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fbf48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fbf4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fbf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fbf50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fbf50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbf54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fbf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fbf58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fbf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fbf5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fbf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2fbf60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2fbf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2fbf64: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2fbf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2fbf68: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2fbf68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2fbf6c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2fbf6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2fbf70: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2fbf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fbf74: 0x5040009d  beql        $v0, $zero, . + 4 + (0x9D << 2)
    ctx->pc = 0x2FBF74u;
    {
        const bool branch_taken_0x2fbf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbf74) {
            ctx->pc = 0x2FBF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBF74u;
            // 0x2fbf78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC1ECu;
            goto label_2fc1ec;
        }
    }
    ctx->pc = 0x2FBF7Cu;
    // 0x2fbf7c: 0xc0bf27c  jal         func_2FC9F0
    ctx->pc = 0x2FBF7Cu;
    SET_GPR_U32(ctx, 31, 0x2FBF84u);
    ctx->pc = 0x2FC9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC9F0u, 0x2FBF7Cu, 0x2FBF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBF84u;
label_2fbf84:
    // 0x2fbf84: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2fbf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2fbf88: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FBF88u;
    {
        const bool branch_taken_0x2fbf88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbf88) {
            ctx->pc = 0x2FBF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBF88u;
            // 0x2fbf8c: 0x9613000e  lhu         $s3, 0xE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBF9Cu;
            goto label_2fbf9c;
        }
    }
    ctx->pc = 0x2FBF90u;
    // 0x2fbf90: 0xc0bf764  jal         func_2FDD90
    ctx->pc = 0x2FBF90u;
    SET_GPR_U32(ctx, 31, 0x2FBF98u);
    ctx->pc = 0x2FDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDD90u, 0x2FBF90u, 0x2FBF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBF98u;
label_2fbf98:
    // 0x2fbf98: 0x9613000e  lhu         $s3, 0xE($s0)
    ctx->pc = 0x2fbf98u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_2fbf9c:
    // 0x2fbf9c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2fbf9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbfa0: 0x12600091  beqz        $s3, . + 4 + (0x91 << 2)
    ctx->pc = 0x2FBFA0u;
    {
        const bool branch_taken_0x2fbfa0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBFA0u;
        // 0x2fbfa4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbfa0) {
            ctx->pc = 0x2FC1E8u;
            goto label_2fc1e8;
        }
    }
    ctx->pc = 0x2FBFA8u;
    // 0x2fbfa8: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x2fbfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x2fbfac: 0xc7949528  lwc1        $f20, -0x6AD8($gp)
    ctx->pc = 0x2fbfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fbfb0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2fbfb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2fbfb4: 0x2451ecb0  addiu       $s1, $v0, -0x1350
    ctx->pc = 0x2fbfb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962352));
label_2fbfb8:
    // 0x2fbfb8: 0x26120040  addiu       $s2, $s0, 0x40
    ctx->pc = 0x2fbfb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2fbfbc: 0xce400000  pref        0x00, 0x0($s2)
    ctx->pc = 0x2fbfbcu;
    // PREF instruction (ignored)
    // 0x2fbfc0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2fbfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2fbfc4: 0x50800085  beql        $a0, $zero, . + 4 + (0x85 << 2)
    ctx->pc = 0x2FBFC4u;
    {
        const bool branch_taken_0x2fbfc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbfc4) {
            ctx->pc = 0x2FBFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBFC4u;
            // 0x2fbfc8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC1DCu;
            goto label_2fc1dc;
        }
    }
    ctx->pc = 0x2FBFCCu;
    // 0x2fbfcc: 0xde030028  ld          $v1, 0x28($s0)
    ctx->pc = 0x2fbfccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2fbfd0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2fbfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2fbfd4: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x2fbfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x2fbfd8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fbfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fbfdc: 0x5440007f  bnel        $v0, $zero, . + 4 + (0x7F << 2)
    ctx->pc = 0x2FBFDCu;
    {
        const bool branch_taken_0x2fbfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbfdc) {
            ctx->pc = 0x2FBFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBFDCu;
            // 0x2fbfe0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC1DCu;
            goto label_2fc1dc;
        }
    }
    ctx->pc = 0x2FBFE4u;
    // 0x2fbfe4: 0x3103f  dsra32      $v0, $v1, 0
    ctx->pc = 0x2fbfe4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2fbfe8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fbfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fbfec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FBFECu;
    {
        const bool branch_taken_0x2fbfec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbfec) {
            ctx->pc = 0x2FBFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBFECu;
            // 0x2fbff0: 0xc480009c  lwc1        $f0, 0x9C($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC008u;
            goto label_2fc008;
        }
    }
    ctx->pc = 0x2FBFF4u;
    // 0x2fbff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fbff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbff8: 0xc0bec4a  jal         func_2FB128
    ctx->pc = 0x2FBFF8u;
    SET_GPR_U32(ctx, 31, 0x2FC000u);
    ctx->pc = 0x2FBFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBFF8u;
    // 0x2fbffc: 0xc48c0030  lwc1        $f12, 0x30($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB128u, 0x2FBFF8u, 0x2FC000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC000u;
label_2fc000:
    // 0x2fc000: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2FC000u;
    {
        const bool branch_taken_0x2fc000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC000u;
        // 0x2fc004: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc000) {
            ctx->pc = 0x2FC1DCu;
            goto label_2fc1dc;
        }
    }
    ctx->pc = 0x2FC008u;
label_2fc008:
    // 0x2fc008: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2fc008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc00c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2FC00Cu;
    {
        const bool branch_taken_0x2fc00c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc00c) {
            ctx->pc = 0x2FC030u;
            goto label_2fc030;
        }
    }
    ctx->pc = 0x2FC014u;
    // 0x2fc014: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2fc014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2fc018: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2fc018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2fc01c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FC01Cu;
    {
        const bool branch_taken_0x2fc01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc01c) {
            ctx->pc = 0x2FC030u;
            goto label_2fc030;
        }
    }
    ctx->pc = 0x2FC024u;
    // 0x2fc024: 0xc0beb40  jal         func_2FAD00
    ctx->pc = 0x2FC024u;
    SET_GPR_U32(ctx, 31, 0x2FC02Cu);
    ctx->pc = 0x2FC028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC024u;
    // 0x2fc028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAD00u, 0x2FC024u, 0x2FC02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC02Cu;
label_2fc02c:
    // 0x2fc02c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2fc02cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fc030:
    // 0x2fc030: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2FC030u;
    {
        const bool branch_taken_0x2fc030 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc030) {
            ctx->pc = 0x2FC054u;
            goto label_2fc054;
        }
    }
    ctx->pc = 0x2FC038u;
    // 0x2fc038: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2fc038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2fc03c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2fc03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2fc040: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2fc040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2fc044: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC044u;
    {
        const bool branch_taken_0x2fc044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc044) {
            ctx->pc = 0x2FC054u;
            goto label_2fc054;
        }
    }
    ctx->pc = 0x2FC04Cu;
    // 0x2fc04c: 0xc0bec9e  jal         func_2FB278
    ctx->pc = 0x2FC04Cu;
    SET_GPR_U32(ctx, 31, 0x2FC054u);
    ctx->pc = 0x2FC050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC04Cu;
    // 0x2fc050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB278u, 0x2FC04Cu, 0x2FC054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC054u;
label_2fc054:
    // 0x2fc054: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2fc054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc058: 0x4502005c  bc1fl       . + 4 + (0x5C << 2)
    ctx->pc = 0x2FC058u;
    {
        const bool branch_taken_0x2fc058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc058) {
            ctx->pc = 0x2FC05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC058u;
            // 0x2fc05c: 0xc60c0030  lwc1        $f12, 0x30($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC1CCu;
            goto label_2fc1cc;
        }
    }
    ctx->pc = 0x2FC060u;
    // 0x2fc060: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2fc060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2fc064: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2fc064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2fc068: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2fc068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2fc06c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FC06Cu;
    {
        const bool branch_taken_0x2fc06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc06c) {
            ctx->pc = 0x2FC080u;
            goto label_2fc080;
        }
    }
    ctx->pc = 0x2FC074u;
    // 0x2fc074: 0xc0bebda  jal         func_2FAF68
    ctx->pc = 0x2FC074u;
    SET_GPR_U32(ctx, 31, 0x2FC07Cu);
    ctx->pc = 0x2FC078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC074u;
    // 0x2fc078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF68u, 0x2FC074u, 0x2FC07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC07Cu;
label_2fc07c:
    // 0x2fc07c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2fc07cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fc080:
    // 0x2fc080: 0x45020052  bc1fl       . + 4 + (0x52 << 2)
    ctx->pc = 0x2FC080u;
    {
        const bool branch_taken_0x2fc080 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc080) {
            ctx->pc = 0x2FC084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC080u;
            // 0x2fc084: 0xc60c0030  lwc1        $f12, 0x30($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC1CCu;
            goto label_2fc1cc;
        }
    }
    ctx->pc = 0x2FC088u;
    // 0x2fc088: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2fc088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2fc08c: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2fc08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2fc090: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2fc090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2fc094: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2FC094u;
    {
        const bool branch_taken_0x2fc094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC094u;
        // 0x2fc098: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc094) {
            ctx->pc = 0x2FC1C8u;
            goto label_2fc1c8;
        }
    }
    ctx->pc = 0x2FC09Cu;
    // 0x2fc09c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC09Cu;
    {
        const bool branch_taken_0x2fc09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FC0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC09Cu;
        // 0x2fc0a0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc09c) {
            ctx->pc = 0x2FC0B8u;
            goto label_2fc0b8;
        }
    }
    ctx->pc = 0x2FC0A4u;
    // 0x2fc0a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fc0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fc0a8: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FC0A8u;
    {
        const bool branch_taken_0x2fc0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FC0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0A8u;
        // 0x2fc0ac: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc0a8) {
            ctx->pc = 0x2FC128u;
            goto label_2fc128;
        }
    }
    ctx->pc = 0x2FC0B0u;
    // 0x2fc0b0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2FC0B0u;
    {
        const bool branch_taken_0x2fc0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0B0u;
        // 0x2fc0b4: 0xc60c0030  lwc1        $f12, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc0b0) {
            ctx->pc = 0x2FC1CCu;
            goto label_2fc1cc;
        }
    }
    ctx->pc = 0x2FC0B8u;
label_2fc0b8:
    // 0x2fc0b8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2fc0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2fc0bc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC0BCu;
    {
        const bool branch_taken_0x2fc0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc0bc) {
            ctx->pc = 0x2FC0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC0BCu;
            // 0x2fc0c0: 0x24830040  addiu       $v1, $a0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC0CCu;
            goto label_2fc0cc;
        }
    }
    ctx->pc = 0x2FC0C4u;
    // 0x2fc0c4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2fc0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2fc0c8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2fc0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_2fc0cc:
    // 0x2fc0cc: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2fc0ccu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fc0d0: 0xda310000  lqc2        $vf17, 0x0($s1)
    ctx->pc = 0x2fc0d0u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fc0d4: 0x4bd1842c  vsub.xyz    $vf16, $vf16, $vf17
    ctx->pc = 0x2fc0d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2fc0d8: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x2fc0d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fc0dc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2fc0dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fc0e0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2fc0e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fc0e4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2fc0e4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2fc0e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fc0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fc0ec: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2fc0ecu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2fc0f0: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2fc0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2fc0f4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2fc0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2fc0f8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FC0F8u;
    {
        const bool branch_taken_0x2fc0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc0f8) {
            ctx->pc = 0x2FC0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC0F8u;
            // 0x2fc0fc: 0xc480006c  lwc1        $f0, 0x6C($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC120u;
            goto label_2fc120;
        }
    }
    ctx->pc = 0x2FC100u;
    // 0x2fc100: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x2fc100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc104: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2fc104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc108: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC108u;
    {
        const bool branch_taken_0x2fc108 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc108) {
            ctx->pc = 0x2FC10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC108u;
            // 0x2fc10c: 0xc480006c  lwc1        $f0, 0x6C($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC120u;
            goto label_2fc120;
        }
    }
    ctx->pc = 0x2FC110u;
    // 0x2fc110: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x2fc110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc114: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2FC114u;
    {
        const bool branch_taken_0x2fc114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC114u;
        // 0x2fc118: 0xc4810074  lwc1        $f1, 0x74($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc114) {
            ctx->pc = 0x2FC18Cu;
            goto label_2fc18c;
        }
    }
    ctx->pc = 0x2FC11Cu;
    // 0x2fc11c: 0x0  nop
    ctx->pc = 0x2fc11cu;
    // NOP
label_2fc120:
    // 0x2fc120: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2FC120u;
    {
        const bool branch_taken_0x2fc120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC120u;
        // 0x2fc124: 0xc4810070  lwc1        $f1, 0x70($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc120) {
            ctx->pc = 0x2FC18Cu;
            goto label_2fc18c;
        }
    }
    ctx->pc = 0x2FC128u;
label_2fc128:
    // 0x2fc128: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2fc128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2fc12c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC12Cu;
    {
        const bool branch_taken_0x2fc12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc12c) {
            ctx->pc = 0x2FC130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC12Cu;
            // 0x2fc130: 0x24830040  addiu       $v1, $a0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC13Cu;
            goto label_2fc13c;
        }
    }
    ctx->pc = 0x2FC134u;
    // 0x2fc134: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2fc134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2fc138: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2fc138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_2fc13c:
    // 0x2fc13c: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2fc13cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fc140: 0xda310000  lqc2        $vf17, 0x0($s1)
    ctx->pc = 0x2fc140u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fc144: 0x4bd1842c  vsub.xyz    $vf16, $vf16, $vf17
    ctx->pc = 0x2fc144u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2fc148: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x2fc148u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fc14c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2fc14cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fc150: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2fc150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fc154: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2fc154u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2fc158: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fc158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fc15c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2fc15cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2fc160: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2fc160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2fc164: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2fc164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2fc168: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FC168u;
    {
        const bool branch_taken_0x2fc168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC168u;
        // 0x2fc16c: 0xc4800070  lwc1        $f0, 0x70($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc168) {
            ctx->pc = 0x2FC188u;
            goto label_2fc188;
        }
    }
    ctx->pc = 0x2FC170u;
    // 0x2fc170: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2fc170u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc174: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC174u;
    {
        const bool branch_taken_0x2fc174 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc174) {
            ctx->pc = 0x2FC178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC174u;
            // 0x2fc178: 0xc481006c  lwc1        $f1, 0x6C($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC18Cu;
            goto label_2fc18c;
        }
    }
    ctx->pc = 0x2FC17Cu;
    // 0x2fc17c: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x2fc17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc180: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FC180u;
    {
        const bool branch_taken_0x2fc180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC180u;
        // 0x2fc184: 0xc4810078  lwc1        $f1, 0x78($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc180) {
            ctx->pc = 0x2FC18Cu;
            goto label_2fc18c;
        }
    }
    ctx->pc = 0x2FC188u;
label_2fc188:
    // 0x2fc188: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x2fc188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fc18c:
    // 0x2fc18c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2fc18cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2fc190: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x2fc190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc194: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC194u;
    {
        const bool branch_taken_0x2fc194 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC194u;
        // 0x2fc198: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc194) {
            ctx->pc = 0x2FC1A4u;
            goto label_2fc1a4;
        }
    }
    ctx->pc = 0x2FC19Cu;
    // 0x2fc19c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2fc19cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2fc1a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2fc1a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2fc1a4:
    // 0x2fc1a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2fc1a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc1a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fc1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc1ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fc1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fc1b0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC1B0u;
    {
        const bool branch_taken_0x2fc1b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc1b0) {
            ctx->pc = 0x2FC1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC1B0u;
            // 0x2fc1b4: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC1C8u;
            goto label_2fc1c8;
        }
    }
    ctx->pc = 0x2FC1B8u;
    // 0x2fc1b8: 0x0  nop
    ctx->pc = 0x2fc1b8u;
    // NOP
    // 0x2fc1bc: 0x0  nop
    ctx->pc = 0x2fc1bcu;
    // NOP
    // 0x2fc1c0: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2fc1c0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x2fc1c4: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x2fc1c4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_2fc1c8:
    // 0x2fc1c8: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x2fc1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2fc1cc:
    // 0x2fc1cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fc1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc1d0: 0xc0bec4a  jal         func_2FB128
    ctx->pc = 0x2FC1D0u;
    SET_GPR_U32(ctx, 31, 0x2FC1D8u);
    ctx->pc = 0x2FC1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC1D0u;
    // 0x2fc1d4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB128u, 0x2FC1D0u, 0x2FC1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC1D8u;
label_2fc1d8:
    // 0x2fc1d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2fc1d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2fc1dc:
    // 0x2fc1dc: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x2fc1dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2fc1e0: 0x1440ff75  bnez        $v0, . + 4 + (-0x8B << 2)
    ctx->pc = 0x2FC1E0u;
    {
        const bool branch_taken_0x2fc1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1E0u;
        // 0x2fc1e4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc1e0) {
            ctx->pc = 0x2FBFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbfb8;
        }
    }
    ctx->pc = 0x2FC1E8u;
label_2fc1e8:
    // 0x2fc1e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc1e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc1ec:
    // 0x2fc1ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fc1ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fc1f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fc1f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc1f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fc1f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fc1f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2fc1f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fc1fc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2fc1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fc200: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2fc200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fc204: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2fc204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fc208: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC208u;
        // 0x2fc20c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC210u;
}
