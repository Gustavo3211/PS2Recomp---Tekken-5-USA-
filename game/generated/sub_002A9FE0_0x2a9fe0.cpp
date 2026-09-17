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

// Function: sub_002A9FE0
// Address: 0x2a9fe0 - 0x2ab338
void sub_002A9FE0_0x2a9fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9FE0_0x2a9fe0");
#endif

    switch (ctx->pc) {
        case 0x2aa058u: goto label_2aa058;
        case 0x2aa094u: goto label_2aa094;
        case 0x2aa0c4u: goto label_2aa0c4;
        case 0x2aa0e8u: goto label_2aa0e8;
        case 0x2aa110u: goto label_2aa110;
        case 0x2aa138u: goto label_2aa138;
        case 0x2aa150u: goto label_2aa150;
        case 0x2aa178u: goto label_2aa178;
        case 0x2aa1a0u: goto label_2aa1a0;
        case 0x2aa1c8u: goto label_2aa1c8;
        case 0x2aa1f0u: goto label_2aa1f0;
        case 0x2aa22cu: goto label_2aa22c;
        case 0x2aa25cu: goto label_2aa25c;
        case 0x2aa29cu: goto label_2aa29c;
        case 0x2aa328u: goto label_2aa328;
        case 0x2aa400u: goto label_2aa400;
        case 0x2aa4d4u: goto label_2aa4d4;
        case 0x2aa5bcu: goto label_2aa5bc;
        case 0x2aa694u: goto label_2aa694;
        case 0x2aa768u: goto label_2aa768;
        case 0x2aa84cu: goto label_2aa84c;
        case 0x2aa924u: goto label_2aa924;
        case 0x2aa9f8u: goto label_2aa9f8;
        case 0x2aaadcu: goto label_2aaadc;
        case 0x2aabb4u: goto label_2aabb4;
        case 0x2aac88u: goto label_2aac88;
        case 0x2aad6cu: goto label_2aad6c;
        case 0x2aae44u: goto label_2aae44;
        case 0x2aaf18u: goto label_2aaf18;
        case 0x2aaff8u: goto label_2aaff8;
        case 0x2ab0d0u: goto label_2ab0d0;
        case 0x2ab1a4u: goto label_2ab1a4;
        case 0x2ab298u: goto label_2ab298;
        case 0x2ab2a4u: goto label_2ab2a4;
        case 0x2ab2acu: goto label_2ab2ac;
        case 0x2ab2fcu: goto label_2ab2fc;
        case 0x2ab310u: goto label_2ab310;
        default: break;
    }

    ctx->pc = 0x2a9fe0u;

    // 0x2a9fe0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a9fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a9fe4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2a9fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a9fe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a9fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9fec: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2a9fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2a9ff0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a9ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a9ff4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2a9ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2a9ff8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a9ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a9ffc: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x2a9ffcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2aa000: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x2aa000u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2aa004: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2aa004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2aa008: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2aa008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2aa00c: 0x504004c1  beql        $v0, $zero, . + 4 + (0x4C1 << 2)
    ctx->pc = 0x2AA00Cu;
    {
        const bool branch_taken_0x2aa00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa00c) {
            ctx->pc = 0x2AA010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA00Cu;
            // 0x2aa010: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB314u;
            goto label_2ab314;
        }
    }
    ctx->pc = 0x2AA014u;
    // 0x2aa014: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2aa014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2aa018: 0x584004be  blezl       $v0, . + 4 + (0x4BE << 2)
    ctx->pc = 0x2AA018u;
    {
        const bool branch_taken_0x2aa018 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2aa018) {
            ctx->pc = 0x2AA01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA018u;
            // 0x2aa01c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB314u;
            goto label_2ab314;
        }
    }
    ctx->pc = 0x2AA020u;
    // 0x2aa020: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2aa020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2aa024: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x2aa024u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x2aa028: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2aa028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x2aa02c: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aa02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aa030: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa034: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2aa034u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BCE68u));
    // 0x2aa038: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa03c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AA03Cu;
    {
        const bool branch_taken_0x2aa03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA03Cu;
        // 0x2aa040: 0x8e110038  lw          $s1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa03c) {
            ctx->pc = 0x2AA068u;
            goto label_2aa068;
        }
    }
    ctx->pc = 0x2AA044u;
    // 0x2aa044: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa048: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa04c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa04cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa050: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA050u;
    SET_GPR_U32(ctx, 31, 0x2AA058u);
    ctx->pc = 0x2AA054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA050u;
    // 0x2aa054: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA050u, 0x2AA058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA058u;
label_2aa058:
    // 0x2aa058: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa058u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa05c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA05Cu;
    {
        const bool branch_taken_0x2aa05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA05Cu;
        // 0x2aa060: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa05c) {
            ctx->pc = 0x2AA06Cu;
            goto label_2aa06c;
        }
    }
    ctx->pc = 0x2AA064u;
    // 0x2aa064: 0x0  nop
    ctx->pc = 0x2aa064u;
    // NOP
label_2aa068:
    // 0x2aa068: 0xc6150054  lwc1        $f21, 0x54($s0)
    ctx->pc = 0x2aa068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2aa06c:
    // 0x2aa06c: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aa06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aa070: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2aa070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2aa074: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa078: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AA078u;
    {
        const bool branch_taken_0x2aa078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa078) {
            ctx->pc = 0x2AA07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA078u;
            // 0x2aa07c: 0xc6140058  lwc1        $f20, 0x58($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA0A0u;
            goto label_2aa0a0;
        }
    }
    ctx->pc = 0x2AA080u;
    // 0x2aa080: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa084: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa088: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa08c: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA08Cu;
    SET_GPR_U32(ctx, 31, 0x2AA094u);
    ctx->pc = 0x2AA090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA08Cu;
    // 0x2aa090: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA08Cu, 0x2AA094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA094u;
label_2aa094:
    // 0x2aa094: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa098: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2aa098u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2aa09c: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aa09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
label_2aa0a0:
    // 0x2aa0a0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2aa0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2aa0a4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa0a8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AA0A8u;
    {
        const bool branch_taken_0x2aa0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa0a8) {
            ctx->pc = 0x2AA0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA0A8u;
            // 0x2aa0ac: 0xc600005c  lwc1        $f0, 0x5C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA0D0u;
            goto label_2aa0d0;
        }
    }
    ctx->pc = 0x2AA0B0u;
    // 0x2aa0b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa0b4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa0b8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa0b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa0bc: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA0BCu;
    SET_GPR_U32(ctx, 31, 0x2AA0C4u);
    ctx->pc = 0x2AA0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA0BCu;
    // 0x2aa0c0: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA0BCu, 0x2AA0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA0C4u;
label_2aa0c4:
    // 0x2aa0c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA0C4u;
    {
        const bool branch_taken_0x2aa0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0C4u;
        // 0x2aa0c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa0c4) {
            ctx->pc = 0x2AA0D4u;
            goto label_2aa0d4;
        }
    }
    ctx->pc = 0x2AA0CCu;
    // 0x2aa0cc: 0x0  nop
    ctx->pc = 0x2aa0ccu;
    // NOP
label_2aa0d0:
    // 0x2aa0d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aa0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa0d4:
    // 0x2aa0d4: 0x2671ce50  addiu       $s1, $s3, -0x31B0
    ctx->pc = 0x2aa0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aa0d8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2aa0d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2aa0dc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2aa0dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2aa0e0: 0xc0ca4fe  jal         func_3293F8
    ctx->pc = 0x2AA0E0u;
    SET_GPR_U32(ctx, 31, 0x2AA0E8u);
    ctx->pc = 0x2AA0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA0E0u;
    // 0x2aa0e4: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3293F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3293F8u, 0x2AA0E0u, 0x2AA0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA0E8u;
label_2aa0e8:
    // 0x2aa0e8: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa0ec: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2aa0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2aa0f0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa0f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA0F4u;
    {
        const bool branch_taken_0x2aa0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0F4u;
        // 0x2aa0f8: 0x8e120038  lw          $s2, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa0f4) {
            ctx->pc = 0x2AA114u;
            goto label_2aa114;
        }
    }
    ctx->pc = 0x2AA0FCu;
    // 0x2aa0fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa100: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa104: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa108: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA108u;
    SET_GPR_U32(ctx, 31, 0x2AA110u);
    ctx->pc = 0x2AA10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA108u;
    // 0x2aa10c: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA108u, 0x2AA110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA110u;
label_2aa110:
    // 0x2aa110: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2aa114:
    // 0x2aa114: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2aa114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2aa118: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa11c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AA11Cu;
    {
        const bool branch_taken_0x2aa11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa11c) {
            ctx->pc = 0x2AA120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA11Cu;
            // 0x2aa120: 0xc6000070  lwc1        $f0, 0x70($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA138u;
            goto label_2aa138;
        }
    }
    ctx->pc = 0x2AA124u;
    // 0x2aa124: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa128: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa12c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa12cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa130: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA130u;
    SET_GPR_U32(ctx, 31, 0x2AA138u);
    ctx->pc = 0x2AA134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA130u;
    // 0x2aa134: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA130u, 0x2AA138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA138u;
label_2aa138:
    // 0x2aa138: 0xc78d908c  lwc1        $f13, -0x6F74($gp)
    ctx->pc = 0x2aa138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2aa13c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aa13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa140: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2aa140u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2aa144: 0x2671ce50  addiu       $s1, $s3, -0x31B0
    ctx->pc = 0x2aa144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aa148: 0xc0ca4e4  jal         func_329390
    ctx->pc = 0x2AA148u;
    SET_GPR_U32(ctx, 31, 0x2AA150u);
    ctx->pc = 0x2AA14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA148u;
    // 0x2aa14c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x329390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329390u, 0x2AA148u, 0x2AA150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA150u;
label_2aa150:
    // 0x2aa150: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa154: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2aa154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2aa158: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa15c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA15Cu;
    {
        const bool branch_taken_0x2aa15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa15c) {
            ctx->pc = 0x2AA160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA15Cu;
            // 0x2aa160: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA180u;
            goto label_2aa180;
        }
    }
    ctx->pc = 0x2AA164u;
    // 0x2aa164: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa168: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa16c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa16cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa170: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA170u;
    SET_GPR_U32(ctx, 31, 0x2AA178u);
    ctx->pc = 0x2AA174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA170u;
    // 0x2aa174: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA170u, 0x2AA178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA178u;
label_2aa178:
    // 0x2aa178: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa178u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa17c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2aa17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2aa180:
    // 0x2aa180: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa184: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA184u;
    {
        const bool branch_taken_0x2aa184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa184) {
            ctx->pc = 0x2AA188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA184u;
            // 0x2aa188: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA1A8u;
            goto label_2aa1a8;
        }
    }
    ctx->pc = 0x2AA18Cu;
    // 0x2aa18c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa190: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa194: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa198: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA198u;
    SET_GPR_U32(ctx, 31, 0x2AA1A0u);
    ctx->pc = 0x2AA19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA198u;
    // 0x2aa19c: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA198u, 0x2AA1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA1A0u;
label_2aa1a0:
    // 0x2aa1a0: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa1a4: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2aa1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2aa1a8:
    // 0x2aa1a8: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa1ac: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA1ACu;
    {
        const bool branch_taken_0x2aa1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa1ac) {
            ctx->pc = 0x2AA1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA1ACu;
            // 0x2aa1b0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA1D0u;
            goto label_2aa1d0;
        }
    }
    ctx->pc = 0x2AA1B4u;
    // 0x2aa1b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa1b8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa1bc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa1bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa1c0: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA1C0u;
    SET_GPR_U32(ctx, 31, 0x2AA1C8u);
    ctx->pc = 0x2AA1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA1C0u;
    // 0x2aa1c4: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA1C0u, 0x2AA1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA1C8u;
label_2aa1c8:
    // 0x2aa1c8: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa1cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2aa1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2aa1d0:
    // 0x2aa1d0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa1d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AA1D4u;
    {
        const bool branch_taken_0x2aa1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1D4u;
        // 0x2aa1d8: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1d4) {
            ctx->pc = 0x2AA200u;
            goto label_2aa200;
        }
    }
    ctx->pc = 0x2AA1DCu;
    // 0x2aa1dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa1e0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa1e4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa1e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa1e8: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA1E8u;
    SET_GPR_U32(ctx, 31, 0x2AA1F0u);
    ctx->pc = 0x2AA1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA1E8u;
    // 0x2aa1ec: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA1E8u, 0x2AA1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA1F0u;
label_2aa1f0:
    // 0x2aa1f0: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa1f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA1F4u;
    {
        const bool branch_taken_0x2aa1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1F4u;
        // 0x2aa1f8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1f4) {
            ctx->pc = 0x2AA204u;
            goto label_2aa204;
        }
    }
    ctx->pc = 0x2AA1FCu;
    // 0x2aa1fc: 0x0  nop
    ctx->pc = 0x2aa1fcu;
    // NOP
label_2aa200:
    // 0x2aa200: 0xc615003c  lwc1        $f21, 0x3C($s0)
    ctx->pc = 0x2aa200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2aa204:
    // 0x2aa204: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aa204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aa208: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2aa208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2aa20c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa210: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AA210u;
    {
        const bool branch_taken_0x2aa210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa210) {
            ctx->pc = 0x2AA214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA210u;
            // 0x2aa214: 0xc6140040  lwc1        $f20, 0x40($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA238u;
            goto label_2aa238;
        }
    }
    ctx->pc = 0x2AA218u;
    // 0x2aa218: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa21c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa220: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa224: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA224u;
    SET_GPR_U32(ctx, 31, 0x2AA22Cu);
    ctx->pc = 0x2AA228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA224u;
    // 0x2aa228: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA224u, 0x2AA22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA22Cu;
label_2aa22c:
    // 0x2aa22c: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa22cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa230: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2aa230u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2aa234: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aa234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
label_2aa238:
    // 0x2aa238: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2aa238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2aa23c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa240: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AA240u;
    {
        const bool branch_taken_0x2aa240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa240) {
            ctx->pc = 0x2AA244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA240u;
            // 0x2aa244: 0xc6000044  lwc1        $f0, 0x44($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA25Cu;
            goto label_2aa25c;
        }
    }
    ctx->pc = 0x2AA248u;
    // 0x2aa248: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa24c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa250: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa254: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA254u;
    SET_GPR_U32(ctx, 31, 0x2AA25Cu);
    ctx->pc = 0x2AA258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA254u;
    // 0x2aa258: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA254u, 0x2AA25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA25Cu;
label_2aa25c:
    // 0x2aa25c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa260: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2aa260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2aa264: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2aa264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aa268: 0xe6350000  swc1        $f21, 0x0($s1)
    ctx->pc = 0x2aa268u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2aa26c: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2aa26cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2aa270: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2aa270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2aa274: 0xe622000c  swc1        $f2, 0xC($s1)
    ctx->pc = 0x2aa274u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2aa278: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2aa278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa27c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2aa27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa280: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2aa280u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2aa284: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2aa284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa288: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2aa288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2aa28c: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2aa28cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2aa290: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2aa290u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2aa294: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x2AA294u;
    SET_GPR_U32(ctx, 31, 0x2AA29Cu);
    ctx->pc = 0x2AA298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA294u;
    // 0x2aa298: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2AA294u, 0x2AA29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA29Cu;
label_2aa29c:
    // 0x2aa29c: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x2aa29cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2aa2a0: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x2aa2a0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2aa2a4: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x2aa2a4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2aa2a8: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x2aa2a8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2aa2ac: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x2aa2acu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2aa2b0: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x2aa2b0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2aa2b4: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x2aa2b4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2aa2b8: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2aa2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa2bc: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2aa2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa2c0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2aa2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa2c4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2aa2c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2aa2c8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2aa2c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2aa2cc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2aa2ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2aa2d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2aa2d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aa2d4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2aa2d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2aa2d8: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x2aa2d8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2aa2dc: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2aa2dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa2e0: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2aa2e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa2e4: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x2aa2e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa2e8: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x2aa2e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2aa2ec: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2aa2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2aa2f0: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2aa2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x2aa2f4: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x2AA2F4u;
    {
        const bool branch_taken_0x2aa2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2F4u;
        // 0x2aa2f8: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2f4) {
            ctx->pc = 0x2AA588u;
            goto label_2aa588;
        }
    }
    ctx->pc = 0x2AA2FCu;
    // 0x2aa2fc: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aa2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aa300: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa300u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa304: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2aa304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2aa308: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa30c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA30Cu;
    {
        const bool branch_taken_0x2aa30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa30c) {
            ctx->pc = 0x2AA310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA30Cu;
            // 0x2aa310: 0xc6020048  lwc1        $f2, 0x48($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA330u;
            goto label_2aa330;
        }
    }
    ctx->pc = 0x2AA314u;
    // 0x2aa314: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa318: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa31c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa31cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa320: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA320u;
    SET_GPR_U32(ctx, 31, 0x2AA328u);
    ctx->pc = 0x2AA324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA320u;
    // 0x2aa324: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA320u, 0x2AA328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA328u;
label_2aa328:
    // 0x2aa328: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa328u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa32c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2aa32cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2aa330:
    // 0x2aa330: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2aa330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2aa334: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa338: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2aa338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2aa33c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa340: 0x0  nop
    ctx->pc = 0x2aa340u;
    // NOP
    // 0x2aa344: 0x0  nop
    ctx->pc = 0x2aa344u;
    // NOP
    // 0x2aa348: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2aa348u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2aa34c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa34cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aa350: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aa350u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aa354: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x2aa354u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2aa358: 0x25034000  addiu       $v1, $t0, 0x4000
    ctx->pc = 0x2aa358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16384));
    // 0x2aa35c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2aa35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2aa360: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA360u;
    {
        const bool branch_taken_0x2aa360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA360u;
        // 0x2aa364: 0x31043fff  andi        $a0, $t0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa360) {
            ctx->pc = 0x2AA370u;
            goto label_2aa370;
        }
    }
    ctx->pc = 0x2AA368u;
    // 0x2aa368: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aa368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aa36c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2aa36cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aa370:
    // 0x2aa370: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x2aa370u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x2aa374: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2aa374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aa378: 0x262a0340  addiu       $t2, $s1, 0x340
    ctx->pc = 0x2aa378u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2aa37c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2aa37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2aa380: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2aa380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2aa384: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2aa384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2aa388: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aa388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aa38c: 0x31054000  andi        $a1, $t0, 0x4000
    ctx->pc = 0x2aa38cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
    // 0x2aa390: 0x31063fff  andi        $a2, $t0, 0x3FFF
    ctx->pc = 0x2aa390u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16383);
    // 0x2aa394: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA394u;
    {
        const bool branch_taken_0x2aa394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA394u;
        // 0x2aa398: 0x834825  or          $t1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa394) {
            ctx->pc = 0x2AA3A4u;
            goto label_2aa3a4;
        }
    }
    ctx->pc = 0x2AA39Cu;
    // 0x2aa39c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aa39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aa3a0: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2aa3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2aa3a4:
    // 0x2aa3a4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2aa3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2aa3a8: 0x31048000  andi        $a0, $t0, 0x8000
    ctx->pc = 0x2aa3a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x2aa3ac: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2aa3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2aa3b0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2aa3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2aa3b4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2aa3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aa3b8: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2aa3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2aa3bc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2aa3bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aa3c0: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x2aa3c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2aa3c4: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2aa3c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa3c8: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2aa3c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aa3cc: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2aa3ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa3d0: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2aa3d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2aa3d4: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2aa3d4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2aa3d8: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aa3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aa3dc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2aa3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2aa3e0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa3e4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA3E4u;
    {
        const bool branch_taken_0x2aa3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa3e4) {
            ctx->pc = 0x2AA3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA3E4u;
            // 0x2aa3e8: 0xc602004c  lwc1        $f2, 0x4C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA408u;
            goto label_2aa408;
        }
    }
    ctx->pc = 0x2AA3ECu;
    // 0x2aa3ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa3f0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa3f4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa3f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa3f8: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA3F8u;
    SET_GPR_U32(ctx, 31, 0x2AA400u);
    ctx->pc = 0x2AA3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA3F8u;
    // 0x2aa3fc: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA3F8u, 0x2AA400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA400u;
label_2aa400:
    // 0x2aa400: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa404: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2aa404u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2aa408:
    // 0x2aa408: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2aa408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2aa40c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa40cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa410: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2aa410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2aa414: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa418: 0x0  nop
    ctx->pc = 0x2aa418u;
    // NOP
    // 0x2aa41c: 0x0  nop
    ctx->pc = 0x2aa41cu;
    // NOP
    // 0x2aa420: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2aa420u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2aa424: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aa428: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aa428u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aa42c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2aa42cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2aa430: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2aa430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2aa434: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2aa434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2aa438: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA438u;
    {
        const bool branch_taken_0x2aa438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA438u;
        // 0x2aa43c: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa438) {
            ctx->pc = 0x2AA448u;
            goto label_2aa448;
        }
    }
    ctx->pc = 0x2AA440u;
    // 0x2aa440: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aa440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aa444: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2aa444u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aa448:
    // 0x2aa448: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2aa448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aa44c: 0x26290340  addiu       $t1, $s1, 0x340
    ctx->pc = 0x2aa44cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2aa450: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2aa450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2aa454: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2aa454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2aa458: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aa458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aa45c: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2aa45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2aa460: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2aa460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2aa464: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2aa464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2aa468: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA468u;
    {
        const bool branch_taken_0x2aa468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA468u;
        // 0x2aa46c: 0x834025  or          $t0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa468) {
            ctx->pc = 0x2AA478u;
            goto label_2aa478;
        }
    }
    ctx->pc = 0x2AA470u;
    // 0x2aa470: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aa470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aa474: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2aa474u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2aa478:
    // 0x2aa478: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2aa478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2aa47c: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2aa47cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2aa480: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2aa480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2aa484: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2aa484u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2aa488: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2aa488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aa48c: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2aa48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2aa490: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2aa490u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aa494: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2aa494u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2aa498: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2aa498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa49c: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2aa49cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aa4a0: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2aa4a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa4a4: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2aa4a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2aa4a8: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2aa4a8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2aa4ac: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aa4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aa4b0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2aa4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2aa4b4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa4b8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA4B8u;
    {
        const bool branch_taken_0x2aa4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa4b8) {
            ctx->pc = 0x2AA4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA4B8u;
            // 0x2aa4bc: 0xc6020050  lwc1        $f2, 0x50($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA4D8u;
            goto label_2aa4d8;
        }
    }
    ctx->pc = 0x2AA4C0u;
    // 0x2aa4c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa4c4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa4c8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa4c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa4cc: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA4CCu;
    SET_GPR_U32(ctx, 31, 0x2AA4D4u);
    ctx->pc = 0x2AA4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA4CCu;
    // 0x2aa4d0: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA4CCu, 0x2AA4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA4D4u;
label_2aa4d4:
    // 0x2aa4d4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2aa4d4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2aa4d8:
    // 0x2aa4d8: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2aa4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2aa4dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa4dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa4e0: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2aa4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2aa4e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa4e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa4e8: 0x0  nop
    ctx->pc = 0x2aa4e8u;
    // NOP
    // 0x2aa4ec: 0x0  nop
    ctx->pc = 0x2aa4ecu;
    // NOP
    // 0x2aa4f0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2aa4f0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2aa4f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa4f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aa4f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aa4f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aa4fc: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2aa4fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2aa500: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2aa500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2aa504: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2aa504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2aa508: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA508u;
    {
        const bool branch_taken_0x2aa508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA508u;
        // 0x2aa50c: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa508) {
            ctx->pc = 0x2AA518u;
            goto label_2aa518;
        }
    }
    ctx->pc = 0x2AA510u;
    // 0x2aa510: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aa510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aa514: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2aa514u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aa518:
    // 0x2aa518: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2aa518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aa51c: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2aa51cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2aa520: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2aa520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2aa524: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2aa524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2aa528: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aa528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aa52c: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2aa52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2aa530: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2aa530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2aa534: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2aa534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2aa538: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA538u;
    {
        const bool branch_taken_0x2aa538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA538u;
        // 0x2aa53c: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa538) {
            ctx->pc = 0x2AA548u;
            goto label_2aa548;
        }
    }
    ctx->pc = 0x2AA540u;
    // 0x2aa540: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aa540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aa544: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2aa544u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2aa548:
    // 0x2aa548: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2aa548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2aa54c: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2aa54cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2aa550: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2aa550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2aa554: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2aa554u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2aa558: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2aa558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aa55c: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2aa55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2aa560: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2aa560u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aa564: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2aa564u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2aa568: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2aa568u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa56c: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2aa56cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aa570: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2aa570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa574: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2aa574u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2aa578: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2aa578u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2aa57c: 0x10000334  b           . + 4 + (0x334 << 2)
    ctx->pc = 0x2AA57Cu;
    {
        const bool branch_taken_0x2aa57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA57Cu;
        // 0x2aa580: 0xc6020010  lwc1        $f2, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa57c) {
            ctx->pc = 0x2AB250u;
            goto label_2ab250;
        }
    }
    ctx->pc = 0x2AA584u;
    // 0x2aa584: 0x0  nop
    ctx->pc = 0x2aa584u;
    // NOP
label_2aa588:
    // 0x2aa588: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2AA588u;
    {
        const bool branch_taken_0x2aa588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA588u;
        // 0x2aa58c: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa588) {
            ctx->pc = 0x2AA818u;
            goto label_2aa818;
        }
    }
    ctx->pc = 0x2AA590u;
    // 0x2aa590: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aa590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aa594: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa598: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2aa598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2aa59c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa5a0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA5A0u;
    {
        const bool branch_taken_0x2aa5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa5a0) {
            ctx->pc = 0x2AA5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA5A0u;
            // 0x2aa5a4: 0xc6020048  lwc1        $f2, 0x48($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA5C4u;
            goto label_2aa5c4;
        }
    }
    ctx->pc = 0x2AA5A8u;
    // 0x2aa5a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa5ac: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa5b0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa5b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa5b4: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA5B4u;
    SET_GPR_U32(ctx, 31, 0x2AA5BCu);
    ctx->pc = 0x2AA5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA5B4u;
    // 0x2aa5b8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA5B4u, 0x2AA5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA5BCu;
label_2aa5bc:
    // 0x2aa5bc: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa5c0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2aa5c0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2aa5c4:
    // 0x2aa5c4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2aa5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2aa5c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa5c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa5cc: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2aa5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2aa5d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa5d4: 0x0  nop
    ctx->pc = 0x2aa5d4u;
    // NOP
    // 0x2aa5d8: 0x0  nop
    ctx->pc = 0x2aa5d8u;
    // NOP
    // 0x2aa5dc: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2aa5dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2aa5e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa5e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aa5e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aa5e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aa5e8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x2aa5e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2aa5ec: 0x25034000  addiu       $v1, $t0, 0x4000
    ctx->pc = 0x2aa5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16384));
    // 0x2aa5f0: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2aa5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2aa5f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA5F4u;
    {
        const bool branch_taken_0x2aa5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA5F4u;
        // 0x2aa5f8: 0x31043fff  andi        $a0, $t0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa5f4) {
            ctx->pc = 0x2AA604u;
            goto label_2aa604;
        }
    }
    ctx->pc = 0x2AA5FCu;
    // 0x2aa5fc: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aa5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aa600: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2aa600u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aa604:
    // 0x2aa604: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x2aa604u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x2aa608: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2aa608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aa60c: 0x262a0340  addiu       $t2, $s1, 0x340
    ctx->pc = 0x2aa60cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2aa610: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2aa610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2aa614: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2aa614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2aa618: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2aa618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2aa61c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aa61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aa620: 0x31054000  andi        $a1, $t0, 0x4000
    ctx->pc = 0x2aa620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
    // 0x2aa624: 0x31063fff  andi        $a2, $t0, 0x3FFF
    ctx->pc = 0x2aa624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16383);
    // 0x2aa628: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA628u;
    {
        const bool branch_taken_0x2aa628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA628u;
        // 0x2aa62c: 0x834825  or          $t1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa628) {
            ctx->pc = 0x2AA638u;
            goto label_2aa638;
        }
    }
    ctx->pc = 0x2AA630u;
    // 0x2aa630: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aa630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aa634: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2aa634u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2aa638:
    // 0x2aa638: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2aa638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2aa63c: 0x31048000  andi        $a0, $t0, 0x8000
    ctx->pc = 0x2aa63cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x2aa640: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2aa640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2aa644: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2aa644u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2aa648: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2aa648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aa64c: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2aa64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2aa650: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2aa650u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aa654: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x2aa654u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2aa658: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2aa658u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa65c: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2aa65cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aa660: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2aa660u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa664: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2aa664u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2aa668: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2aa668u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2aa66c: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aa66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aa670: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2aa670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2aa674: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa678: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA678u;
    {
        const bool branch_taken_0x2aa678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa678) {
            ctx->pc = 0x2AA67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA678u;
            // 0x2aa67c: 0xc6020050  lwc1        $f2, 0x50($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA69Cu;
            goto label_2aa69c;
        }
    }
    ctx->pc = 0x2AA680u;
    // 0x2aa680: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa684: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa688: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa68c: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA68Cu;
    SET_GPR_U32(ctx, 31, 0x2AA694u);
    ctx->pc = 0x2AA690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA68Cu;
    // 0x2aa690: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA68Cu, 0x2AA694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA694u;
label_2aa694:
    // 0x2aa694: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa698: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2aa698u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2aa69c:
    // 0x2aa69c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2aa69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2aa6a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa6a4: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2aa6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2aa6a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa6a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa6ac: 0x0  nop
    ctx->pc = 0x2aa6acu;
    // NOP
    // 0x2aa6b0: 0x0  nop
    ctx->pc = 0x2aa6b0u;
    // NOP
    // 0x2aa6b4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2aa6b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2aa6b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa6b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aa6bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aa6bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aa6c0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2aa6c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2aa6c4: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2aa6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2aa6c8: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2aa6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2aa6cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA6CCu;
    {
        const bool branch_taken_0x2aa6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA6CCu;
        // 0x2aa6d0: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa6cc) {
            ctx->pc = 0x2AA6DCu;
            goto label_2aa6dc;
        }
    }
    ctx->pc = 0x2AA6D4u;
    // 0x2aa6d4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aa6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aa6d8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2aa6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aa6dc:
    // 0x2aa6dc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2aa6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aa6e0: 0x26290340  addiu       $t1, $s1, 0x340
    ctx->pc = 0x2aa6e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2aa6e4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2aa6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2aa6e8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2aa6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2aa6ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aa6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aa6f0: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2aa6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2aa6f4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2aa6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2aa6f8: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2aa6f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2aa6fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA6FCu;
    {
        const bool branch_taken_0x2aa6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA6FCu;
        // 0x2aa700: 0x834025  or          $t0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa6fc) {
            ctx->pc = 0x2AA70Cu;
            goto label_2aa70c;
        }
    }
    ctx->pc = 0x2AA704u;
    // 0x2aa704: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aa704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aa708: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2aa708u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2aa70c:
    // 0x2aa70c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2aa70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2aa710: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2aa710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2aa714: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2aa714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2aa718: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2aa718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2aa71c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2aa71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aa720: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2aa720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2aa724: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2aa724u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aa728: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2aa728u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2aa72c: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2aa72cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa730: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2aa730u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aa734: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2aa734u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa738: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2aa738u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2aa73c: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2aa73cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2aa740: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aa740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aa744: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2aa744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2aa748: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa74c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA74Cu;
    {
        const bool branch_taken_0x2aa74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa74c) {
            ctx->pc = 0x2AA750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA74Cu;
            // 0x2aa750: 0xc602004c  lwc1        $f2, 0x4C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA76Cu;
            goto label_2aa76c;
        }
    }
    ctx->pc = 0x2AA754u;
    // 0x2aa754: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa758: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa75c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa75cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa760: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA760u;
    SET_GPR_U32(ctx, 31, 0x2AA768u);
    ctx->pc = 0x2AA764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA760u;
    // 0x2aa764: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA760u, 0x2AA768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA768u;
label_2aa768:
    // 0x2aa768: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2aa768u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2aa76c:
    // 0x2aa76c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2aa76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2aa770: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa774: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2aa774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2aa778: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa77c: 0x0  nop
    ctx->pc = 0x2aa77cu;
    // NOP
    // 0x2aa780: 0x0  nop
    ctx->pc = 0x2aa780u;
    // NOP
    // 0x2aa784: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2aa784u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2aa788: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aa78c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aa78cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aa790: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2aa790u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2aa794: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2aa794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2aa798: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2aa798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2aa79c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA79Cu;
    {
        const bool branch_taken_0x2aa79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA79Cu;
        // 0x2aa7a0: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa79c) {
            ctx->pc = 0x2AA7ACu;
            goto label_2aa7ac;
        }
    }
    ctx->pc = 0x2AA7A4u;
    // 0x2aa7a4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aa7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aa7a8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2aa7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aa7ac:
    // 0x2aa7ac: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2aa7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aa7b0: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2aa7b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2aa7b4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2aa7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2aa7b8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2aa7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2aa7bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aa7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aa7c0: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2aa7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2aa7c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2aa7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2aa7c8: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2aa7c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2aa7cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA7CCu;
    {
        const bool branch_taken_0x2aa7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7CCu;
        // 0x2aa7d0: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa7cc) {
            ctx->pc = 0x2AA7DCu;
            goto label_2aa7dc;
        }
    }
    ctx->pc = 0x2AA7D4u;
    // 0x2aa7d4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aa7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aa7d8: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2aa7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2aa7dc:
    // 0x2aa7dc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2aa7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2aa7e0: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2aa7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2aa7e4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2aa7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2aa7e8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2aa7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2aa7ec: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2aa7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aa7f0: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2aa7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2aa7f4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2aa7f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aa7f8: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2aa7f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2aa7fc: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2aa7fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa800: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2aa800u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aa804: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2aa804u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa808: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2aa808u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2aa80c: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2aa80cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2aa810: 0x1000028f  b           . + 4 + (0x28F << 2)
    ctx->pc = 0x2AA810u;
    {
        const bool branch_taken_0x2aa810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA810u;
        // 0x2aa814: 0xc6020010  lwc1        $f2, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa810) {
            ctx->pc = 0x2AB250u;
            goto label_2ab250;
        }
    }
    ctx->pc = 0x2AA818u;
label_2aa818:
    // 0x2aa818: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2AA818u;
    {
        const bool branch_taken_0x2aa818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA818u;
        // 0x2aa81c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa818) {
            ctx->pc = 0x2AAAA8u;
            goto label_2aaaa8;
        }
    }
    ctx->pc = 0x2AA820u;
    // 0x2aa820: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aa820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aa824: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa824u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa828: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2aa828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2aa82c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa830: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA830u;
    {
        const bool branch_taken_0x2aa830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa830) {
            ctx->pc = 0x2AA834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA830u;
            // 0x2aa834: 0xc602004c  lwc1        $f2, 0x4C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA854u;
            goto label_2aa854;
        }
    }
    ctx->pc = 0x2AA838u;
    // 0x2aa838: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa83c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa840: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa844: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA844u;
    SET_GPR_U32(ctx, 31, 0x2AA84Cu);
    ctx->pc = 0x2AA848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA844u;
    // 0x2aa848: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA844u, 0x2AA84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA84Cu;
label_2aa84c:
    // 0x2aa84c: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa84cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa850: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2aa850u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2aa854:
    // 0x2aa854: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2aa854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2aa858: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa85c: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2aa85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2aa860: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa864: 0x0  nop
    ctx->pc = 0x2aa864u;
    // NOP
    // 0x2aa868: 0x0  nop
    ctx->pc = 0x2aa868u;
    // NOP
    // 0x2aa86c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2aa86cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2aa870: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aa874: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aa874u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aa878: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x2aa878u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2aa87c: 0x25034000  addiu       $v1, $t0, 0x4000
    ctx->pc = 0x2aa87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16384));
    // 0x2aa880: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2aa880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2aa884: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA884u;
    {
        const bool branch_taken_0x2aa884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA884u;
        // 0x2aa888: 0x31043fff  andi        $a0, $t0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa884) {
            ctx->pc = 0x2AA894u;
            goto label_2aa894;
        }
    }
    ctx->pc = 0x2AA88Cu;
    // 0x2aa88c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aa88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aa890: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2aa890u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aa894:
    // 0x2aa894: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x2aa894u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x2aa898: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2aa898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aa89c: 0x262a0340  addiu       $t2, $s1, 0x340
    ctx->pc = 0x2aa89cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2aa8a0: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2aa8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2aa8a4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2aa8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2aa8a8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2aa8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2aa8ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aa8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aa8b0: 0x31054000  andi        $a1, $t0, 0x4000
    ctx->pc = 0x2aa8b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
    // 0x2aa8b4: 0x31063fff  andi        $a2, $t0, 0x3FFF
    ctx->pc = 0x2aa8b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16383);
    // 0x2aa8b8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA8B8u;
    {
        const bool branch_taken_0x2aa8b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8B8u;
        // 0x2aa8bc: 0x834825  or          $t1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa8b8) {
            ctx->pc = 0x2AA8C8u;
            goto label_2aa8c8;
        }
    }
    ctx->pc = 0x2AA8C0u;
    // 0x2aa8c0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aa8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aa8c4: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2aa8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2aa8c8:
    // 0x2aa8c8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2aa8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2aa8cc: 0x31048000  andi        $a0, $t0, 0x8000
    ctx->pc = 0x2aa8ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x2aa8d0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2aa8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2aa8d4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2aa8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2aa8d8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2aa8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aa8dc: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2aa8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2aa8e0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2aa8e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aa8e4: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x2aa8e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2aa8e8: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2aa8e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa8ec: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2aa8ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aa8f0: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2aa8f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa8f4: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2aa8f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2aa8f8: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2aa8f8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2aa8fc: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aa8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aa900: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2aa900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2aa904: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa908: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA908u;
    {
        const bool branch_taken_0x2aa908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa908) {
            ctx->pc = 0x2AA90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA908u;
            // 0x2aa90c: 0xc6020048  lwc1        $f2, 0x48($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA92Cu;
            goto label_2aa92c;
        }
    }
    ctx->pc = 0x2AA910u;
    // 0x2aa910: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa914: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa918: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa91c: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA91Cu;
    SET_GPR_U32(ctx, 31, 0x2AA924u);
    ctx->pc = 0x2AA920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA91Cu;
    // 0x2aa920: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA91Cu, 0x2AA924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA924u;
label_2aa924:
    // 0x2aa924: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aa924u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aa928: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2aa928u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2aa92c:
    // 0x2aa92c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2aa92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2aa930: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa934: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2aa934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2aa938: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa93c: 0x0  nop
    ctx->pc = 0x2aa93cu;
    // NOP
    // 0x2aa940: 0x0  nop
    ctx->pc = 0x2aa940u;
    // NOP
    // 0x2aa944: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2aa944u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2aa948: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aa94c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aa94cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aa950: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2aa950u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2aa954: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2aa954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2aa958: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2aa958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2aa95c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA95Cu;
    {
        const bool branch_taken_0x2aa95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA95Cu;
        // 0x2aa960: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa95c) {
            ctx->pc = 0x2AA96Cu;
            goto label_2aa96c;
        }
    }
    ctx->pc = 0x2AA964u;
    // 0x2aa964: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aa964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aa968: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2aa968u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aa96c:
    // 0x2aa96c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2aa96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aa970: 0x26290340  addiu       $t1, $s1, 0x340
    ctx->pc = 0x2aa970u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2aa974: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2aa974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2aa978: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2aa978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2aa97c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aa97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aa980: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2aa980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2aa984: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2aa984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2aa988: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2aa988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2aa98c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA98Cu;
    {
        const bool branch_taken_0x2aa98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA98Cu;
        // 0x2aa990: 0x834025  or          $t0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa98c) {
            ctx->pc = 0x2AA99Cu;
            goto label_2aa99c;
        }
    }
    ctx->pc = 0x2AA994u;
    // 0x2aa994: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aa994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aa998: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2aa998u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2aa99c:
    // 0x2aa99c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2aa99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2aa9a0: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2aa9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2aa9a4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2aa9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2aa9a8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2aa9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2aa9ac: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2aa9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aa9b0: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2aa9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2aa9b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2aa9b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aa9b8: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2aa9b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2aa9bc: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2aa9bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa9c0: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2aa9c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aa9c4: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2aa9c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aa9c8: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2aa9c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2aa9cc: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2aa9ccu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2aa9d0: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aa9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aa9d4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2aa9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2aa9d8: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aa9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aa9dc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA9DCu;
    {
        const bool branch_taken_0x2aa9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa9dc) {
            ctx->pc = 0x2AA9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA9DCu;
            // 0x2aa9e0: 0xc6020050  lwc1        $f2, 0x50($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA9FCu;
            goto label_2aa9fc;
        }
    }
    ctx->pc = 0x2AA9E4u;
    // 0x2aa9e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa9e8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aa9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aa9ec: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aa9ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aa9f0: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AA9F0u;
    SET_GPR_U32(ctx, 31, 0x2AA9F8u);
    ctx->pc = 0x2AA9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA9F0u;
    // 0x2aa9f4: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AA9F0u, 0x2AA9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA9F8u;
label_2aa9f8:
    // 0x2aa9f8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2aa9f8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2aa9fc:
    // 0x2aa9fc: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2aa9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2aaa00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aaa00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaa04: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2aaa04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2aaa08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aaa08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aaa0c: 0x0  nop
    ctx->pc = 0x2aaa0cu;
    // NOP
    // 0x2aaa10: 0x0  nop
    ctx->pc = 0x2aaa10u;
    // NOP
    // 0x2aaa14: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2aaa14u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2aaa18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aaa18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aaa1c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aaa1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aaa20: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2aaa20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2aaa24: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2aaa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2aaa28: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2aaa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2aaa2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAA2Cu;
    {
        const bool branch_taken_0x2aaa2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA2Cu;
        // 0x2aaa30: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa2c) {
            ctx->pc = 0x2AAA3Cu;
            goto label_2aaa3c;
        }
    }
    ctx->pc = 0x2AAA34u;
    // 0x2aaa34: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aaa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aaa38: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2aaa38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aaa3c:
    // 0x2aaa3c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2aaa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aaa40: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2aaa40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2aaa44: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2aaa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2aaa48: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2aaa48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2aaa4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aaa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aaa50: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2aaa50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2aaa54: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2aaa54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2aaa58: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2aaa58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2aaa5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAA5Cu;
    {
        const bool branch_taken_0x2aaa5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA5Cu;
        // 0x2aaa60: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa5c) {
            ctx->pc = 0x2AAA6Cu;
            goto label_2aaa6c;
        }
    }
    ctx->pc = 0x2AAA64u;
    // 0x2aaa64: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aaa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aaa68: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2aaa68u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2aaa6c:
    // 0x2aaa6c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2aaa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2aaa70: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2aaa70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2aaa74: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2aaa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2aaa78: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2aaa78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2aaa7c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2aaa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aaa80: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2aaa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2aaa84: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2aaa84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aaa88: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2aaa88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2aaa8c: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2aaa8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aaa90: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2aaa90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aaa94: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2aaa94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aaa98: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2aaa98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2aaa9c: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2aaa9cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2aaaa0: 0x100001eb  b           . + 4 + (0x1EB << 2)
    ctx->pc = 0x2AAAA0u;
    {
        const bool branch_taken_0x2aaaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAA0u;
        // 0x2aaaa4: 0xc6020010  lwc1        $f2, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaaa0) {
            ctx->pc = 0x2AB250u;
            goto label_2ab250;
        }
    }
    ctx->pc = 0x2AAAA8u;
label_2aaaa8:
    // 0x2aaaa8: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2AAAA8u;
    {
        const bool branch_taken_0x2aaaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAA8u;
        // 0x2aaaac: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaaa8) {
            ctx->pc = 0x2AAD38u;
            goto label_2aad38;
        }
    }
    ctx->pc = 0x2AAAB0u;
    // 0x2aaab0: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aaab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aaab4: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aaab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aaab8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2aaab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2aaabc: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aaabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aaac0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AAAC0u;
    {
        const bool branch_taken_0x2aaac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaac0) {
            ctx->pc = 0x2AAAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAAC0u;
            // 0x2aaac4: 0xc602004c  lwc1        $f2, 0x4C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAAE4u;
            goto label_2aaae4;
        }
    }
    ctx->pc = 0x2AAAC8u;
    // 0x2aaac8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aaac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aaacc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aaaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aaad0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aaad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aaad4: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AAAD4u;
    SET_GPR_U32(ctx, 31, 0x2AAADCu);
    ctx->pc = 0x2AAAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAAD4u;
    // 0x2aaad8: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AAAD4u, 0x2AAADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAADCu;
label_2aaadc:
    // 0x2aaadc: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aaadcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aaae0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2aaae0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2aaae4:
    // 0x2aaae4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2aaae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2aaae8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aaae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaaec: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2aaaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2aaaf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aaaf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aaaf4: 0x0  nop
    ctx->pc = 0x2aaaf4u;
    // NOP
    // 0x2aaaf8: 0x0  nop
    ctx->pc = 0x2aaaf8u;
    // NOP
    // 0x2aaafc: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2aaafcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2aab00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aab00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aab04: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aab04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aab08: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x2aab08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2aab0c: 0x25034000  addiu       $v1, $t0, 0x4000
    ctx->pc = 0x2aab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16384));
    // 0x2aab10: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2aab10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2aab14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAB14u;
    {
        const bool branch_taken_0x2aab14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB14u;
        // 0x2aab18: 0x31043fff  andi        $a0, $t0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab14) {
            ctx->pc = 0x2AAB24u;
            goto label_2aab24;
        }
    }
    ctx->pc = 0x2AAB1Cu;
    // 0x2aab1c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aab20: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2aab20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aab24:
    // 0x2aab24: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x2aab24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x2aab28: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2aab28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aab2c: 0x262a0340  addiu       $t2, $s1, 0x340
    ctx->pc = 0x2aab2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2aab30: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2aab30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2aab34: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2aab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2aab38: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2aab38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2aab3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aab40: 0x31054000  andi        $a1, $t0, 0x4000
    ctx->pc = 0x2aab40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
    // 0x2aab44: 0x31063fff  andi        $a2, $t0, 0x3FFF
    ctx->pc = 0x2aab44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16383);
    // 0x2aab48: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAB48u;
    {
        const bool branch_taken_0x2aab48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB48u;
        // 0x2aab4c: 0x834825  or          $t1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab48) {
            ctx->pc = 0x2AAB58u;
            goto label_2aab58;
        }
    }
    ctx->pc = 0x2AAB50u;
    // 0x2aab50: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aab50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aab54: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2aab54u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2aab58:
    // 0x2aab58: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2aab58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2aab5c: 0x31048000  andi        $a0, $t0, 0x8000
    ctx->pc = 0x2aab5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x2aab60: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2aab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2aab64: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2aab64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2aab68: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2aab68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aab6c: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2aab6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2aab70: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2aab70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aab74: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x2aab74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2aab78: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2aab78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aab7c: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2aab7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aab80: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2aab80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aab84: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2aab84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2aab88: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2aab88u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2aab8c: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aab90: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2aab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2aab94: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aab94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aab98: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AAB98u;
    {
        const bool branch_taken_0x2aab98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aab98) {
            ctx->pc = 0x2AAB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAB98u;
            // 0x2aab9c: 0xc6020050  lwc1        $f2, 0x50($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AABBCu;
            goto label_2aabbc;
        }
    }
    ctx->pc = 0x2AABA0u;
    // 0x2aaba0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aaba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aaba4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aaba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aaba8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aaba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aabac: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AABACu;
    SET_GPR_U32(ctx, 31, 0x2AABB4u);
    ctx->pc = 0x2AABB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AABACu;
    // 0x2aabb0: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AABACu, 0x2AABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AABB4u;
label_2aabb4:
    // 0x2aabb4: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aabb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aabb8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2aabb8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2aabbc:
    // 0x2aabbc: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2aabbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2aabc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aabc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aabc4: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2aabc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2aabc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aabc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aabcc: 0x0  nop
    ctx->pc = 0x2aabccu;
    // NOP
    // 0x2aabd0: 0x0  nop
    ctx->pc = 0x2aabd0u;
    // NOP
    // 0x2aabd4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2aabd4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2aabd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aabd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aabdc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aabdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aabe0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2aabe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2aabe4: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2aabe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2aabe8: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2aabe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2aabec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AABECu;
    {
        const bool branch_taken_0x2aabec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABECu;
        // 0x2aabf0: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aabec) {
            ctx->pc = 0x2AABFCu;
            goto label_2aabfc;
        }
    }
    ctx->pc = 0x2AABF4u;
    // 0x2aabf4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aabf8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2aabf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aabfc:
    // 0x2aabfc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2aabfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aac00: 0x26290340  addiu       $t1, $s1, 0x340
    ctx->pc = 0x2aac00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2aac04: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2aac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2aac08: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2aac08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2aac0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aac10: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2aac10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2aac14: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2aac14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2aac18: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2aac18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2aac1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAC1Cu;
    {
        const bool branch_taken_0x2aac1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC1Cu;
        // 0x2aac20: 0x834025  or          $t0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac1c) {
            ctx->pc = 0x2AAC2Cu;
            goto label_2aac2c;
        }
    }
    ctx->pc = 0x2AAC24u;
    // 0x2aac24: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aac28: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2aac28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2aac2c:
    // 0x2aac2c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2aac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2aac30: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2aac30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2aac34: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2aac34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2aac38: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2aac38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2aac3c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2aac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aac40: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2aac40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2aac44: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2aac44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aac48: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2aac48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2aac4c: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2aac4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aac50: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2aac50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aac54: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2aac54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aac58: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2aac58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2aac5c: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2aac5cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2aac60: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aac60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aac64: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2aac64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2aac68: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aac68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aac6c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AAC6Cu;
    {
        const bool branch_taken_0x2aac6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aac6c) {
            ctx->pc = 0x2AAC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAC6Cu;
            // 0x2aac70: 0xc6020048  lwc1        $f2, 0x48($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAC8Cu;
            goto label_2aac8c;
        }
    }
    ctx->pc = 0x2AAC74u;
    // 0x2aac74: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aac78: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aac7c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aac7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aac80: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AAC80u;
    SET_GPR_U32(ctx, 31, 0x2AAC88u);
    ctx->pc = 0x2AAC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAC80u;
    // 0x2aac84: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AAC80u, 0x2AAC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC88u;
label_2aac88:
    // 0x2aac88: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2aac88u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2aac8c:
    // 0x2aac8c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2aac8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2aac90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aac90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aac94: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2aac94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2aac98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aac98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aac9c: 0x0  nop
    ctx->pc = 0x2aac9cu;
    // NOP
    // 0x2aaca0: 0x0  nop
    ctx->pc = 0x2aaca0u;
    // NOP
    // 0x2aaca4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2aaca4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2aaca8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aaca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aacac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aacacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aacb0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2aacb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2aacb4: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2aacb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2aacb8: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2aacb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2aacbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AACBCu;
    {
        const bool branch_taken_0x2aacbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AACBCu;
        // 0x2aacc0: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aacbc) {
            ctx->pc = 0x2AACCCu;
            goto label_2aaccc;
        }
    }
    ctx->pc = 0x2AACC4u;
    // 0x2aacc4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aacc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aacc8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2aacc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aaccc:
    // 0x2aaccc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2aacccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aacd0: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2aacd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2aacd4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2aacd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2aacd8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2aacd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2aacdc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aacdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aace0: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2aace0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2aace4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2aace4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2aace8: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2aace8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2aacec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AACECu;
    {
        const bool branch_taken_0x2aacec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AACECu;
        // 0x2aacf0: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aacec) {
            ctx->pc = 0x2AACFCu;
            goto label_2aacfc;
        }
    }
    ctx->pc = 0x2AACF4u;
    // 0x2aacf4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aacf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aacf8: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2aacf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2aacfc:
    // 0x2aacfc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2aacfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2aad00: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2aad00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2aad04: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2aad04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2aad08: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2aad08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2aad0c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2aad0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aad10: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2aad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2aad14: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2aad14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aad18: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2aad18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2aad1c: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2aad1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aad20: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2aad20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aad24: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2aad24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aad28: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2aad28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2aad2c: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2aad2cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2aad30: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x2AAD30u;
    {
        const bool branch_taken_0x2aad30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD30u;
        // 0x2aad34: 0xc6020010  lwc1        $f2, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aad30) {
            ctx->pc = 0x2AB250u;
            goto label_2ab250;
        }
    }
    ctx->pc = 0x2AAD38u;
label_2aad38:
    // 0x2aad38: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2AAD38u;
    {
        const bool branch_taken_0x2aad38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD38u;
        // 0x2aad3c: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aad38) {
            ctx->pc = 0x2AAFC8u;
            goto label_2aafc8;
        }
    }
    ctx->pc = 0x2AAD40u;
    // 0x2aad40: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aad40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aad44: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aad44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aad48: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2aad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2aad4c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aad4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aad50: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AAD50u;
    {
        const bool branch_taken_0x2aad50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aad50) {
            ctx->pc = 0x2AAD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAD50u;
            // 0x2aad54: 0xc6020050  lwc1        $f2, 0x50($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAD74u;
            goto label_2aad74;
        }
    }
    ctx->pc = 0x2AAD58u;
    // 0x2aad58: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aad5c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aad5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aad60: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aad60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aad64: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AAD64u;
    SET_GPR_U32(ctx, 31, 0x2AAD6Cu);
    ctx->pc = 0x2AAD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAD64u;
    // 0x2aad68: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AAD64u, 0x2AAD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD6Cu;
label_2aad6c:
    // 0x2aad6c: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aad6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aad70: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2aad70u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2aad74:
    // 0x2aad74: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2aad74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2aad78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aad78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aad7c: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2aad7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2aad80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aad80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aad84: 0x0  nop
    ctx->pc = 0x2aad84u;
    // NOP
    // 0x2aad88: 0x0  nop
    ctx->pc = 0x2aad88u;
    // NOP
    // 0x2aad8c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2aad8cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2aad90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aad90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aad94: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aad94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aad98: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x2aad98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2aad9c: 0x25034000  addiu       $v1, $t0, 0x4000
    ctx->pc = 0x2aad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16384));
    // 0x2aada0: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2aada0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2aada4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AADA4u;
    {
        const bool branch_taken_0x2aada4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AADA4u;
        // 0x2aada8: 0x31043fff  andi        $a0, $t0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aada4) {
            ctx->pc = 0x2AADB4u;
            goto label_2aadb4;
        }
    }
    ctx->pc = 0x2AADACu;
    // 0x2aadac: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aadacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aadb0: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2aadb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aadb4:
    // 0x2aadb4: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x2aadb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x2aadb8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2aadb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aadbc: 0x262a0340  addiu       $t2, $s1, 0x340
    ctx->pc = 0x2aadbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2aadc0: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2aadc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2aadc4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2aadc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2aadc8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2aadc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2aadcc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aadccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aadd0: 0x31054000  andi        $a1, $t0, 0x4000
    ctx->pc = 0x2aadd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
    // 0x2aadd4: 0x31063fff  andi        $a2, $t0, 0x3FFF
    ctx->pc = 0x2aadd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16383);
    // 0x2aadd8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AADD8u;
    {
        const bool branch_taken_0x2aadd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AADD8u;
        // 0x2aaddc: 0x834825  or          $t1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aadd8) {
            ctx->pc = 0x2AADE8u;
            goto label_2aade8;
        }
    }
    ctx->pc = 0x2AADE0u;
    // 0x2aade0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aade0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aade4: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2aade4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2aade8:
    // 0x2aade8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2aade8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2aadec: 0x31048000  andi        $a0, $t0, 0x8000
    ctx->pc = 0x2aadecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x2aadf0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2aadf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2aadf4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2aadf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2aadf8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2aadf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aadfc: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2aadfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2aae00: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2aae00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aae04: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x2aae04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2aae08: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2aae08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aae0c: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2aae0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aae10: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2aae10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aae14: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2aae14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2aae18: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2aae18u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2aae1c: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aae20: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2aae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2aae24: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aae28: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AAE28u;
    {
        const bool branch_taken_0x2aae28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aae28) {
            ctx->pc = 0x2AAE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAE28u;
            // 0x2aae2c: 0xc6020048  lwc1        $f2, 0x48($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAE4Cu;
            goto label_2aae4c;
        }
    }
    ctx->pc = 0x2AAE30u;
    // 0x2aae30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aae30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aae34: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aae38: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aae38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aae3c: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AAE3Cu;
    SET_GPR_U32(ctx, 31, 0x2AAE44u);
    ctx->pc = 0x2AAE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAE3Cu;
    // 0x2aae40: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AAE3Cu, 0x2AAE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAE44u;
label_2aae44:
    // 0x2aae44: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aae44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aae48: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2aae48u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2aae4c:
    // 0x2aae4c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2aae4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2aae50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aae50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aae54: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2aae54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2aae58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aae58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aae5c: 0x0  nop
    ctx->pc = 0x2aae5cu;
    // NOP
    // 0x2aae60: 0x0  nop
    ctx->pc = 0x2aae60u;
    // NOP
    // 0x2aae64: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2aae64u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2aae68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aae68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aae6c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aae6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aae70: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2aae70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2aae74: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2aae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2aae78: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2aae78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2aae7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAE7Cu;
    {
        const bool branch_taken_0x2aae7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE7Cu;
        // 0x2aae80: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae7c) {
            ctx->pc = 0x2AAE8Cu;
            goto label_2aae8c;
        }
    }
    ctx->pc = 0x2AAE84u;
    // 0x2aae84: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aae84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aae88: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2aae88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aae8c:
    // 0x2aae8c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2aae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aae90: 0x26290340  addiu       $t1, $s1, 0x340
    ctx->pc = 0x2aae90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2aae94: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2aae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2aae98: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2aae98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2aae9c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aaea0: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2aaea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2aaea4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2aaea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2aaea8: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2aaea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2aaeac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAEACu;
    {
        const bool branch_taken_0x2aaeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAEACu;
        // 0x2aaeb0: 0x834025  or          $t0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaeac) {
            ctx->pc = 0x2AAEBCu;
            goto label_2aaebc;
        }
    }
    ctx->pc = 0x2AAEB4u;
    // 0x2aaeb4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aaeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aaeb8: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2aaeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2aaebc:
    // 0x2aaebc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2aaebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2aaec0: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2aaec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2aaec4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2aaec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2aaec8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2aaec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2aaecc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2aaeccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aaed0: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2aaed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2aaed4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2aaed4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aaed8: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2aaed8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2aaedc: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2aaedcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aaee0: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2aaee0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aaee4: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2aaee4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aaee8: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2aaee8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2aaeec: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2aaeecu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2aaef0: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2aaef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2aaef4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2aaef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2aaef8: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aaef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aaefc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AAEFCu;
    {
        const bool branch_taken_0x2aaefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaefc) {
            ctx->pc = 0x2AAF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAEFCu;
            // 0x2aaf00: 0xc602004c  lwc1        $f2, 0x4C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAF1Cu;
            goto label_2aaf1c;
        }
    }
    ctx->pc = 0x2AAF04u;
    // 0x2aaf04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aaf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aaf08: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aaf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aaf0c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aaf0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aaf10: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AAF10u;
    SET_GPR_U32(ctx, 31, 0x2AAF18u);
    ctx->pc = 0x2AAF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAF10u;
    // 0x2aaf14: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AAF10u, 0x2AAF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF18u;
label_2aaf18:
    // 0x2aaf18: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2aaf18u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2aaf1c:
    // 0x2aaf1c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2aaf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2aaf20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aaf20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaf24: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2aaf24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2aaf28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aaf28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aaf2c: 0x0  nop
    ctx->pc = 0x2aaf2cu;
    // NOP
    // 0x2aaf30: 0x0  nop
    ctx->pc = 0x2aaf30u;
    // NOP
    // 0x2aaf34: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2aaf34u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2aaf38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aaf38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aaf3c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aaf3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aaf40: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2aaf40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2aaf44: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2aaf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2aaf48: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2aaf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2aaf4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAF4Cu;
    {
        const bool branch_taken_0x2aaf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAF4Cu;
        // 0x2aaf50: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf4c) {
            ctx->pc = 0x2AAF5Cu;
            goto label_2aaf5c;
        }
    }
    ctx->pc = 0x2AAF54u;
    // 0x2aaf54: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aaf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aaf58: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2aaf58u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2aaf5c:
    // 0x2aaf5c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2aaf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aaf60: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2aaf60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2aaf64: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2aaf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2aaf68: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2aaf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2aaf6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aaf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aaf70: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2aaf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2aaf74: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2aaf74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2aaf78: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2aaf78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2aaf7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAF7Cu;
    {
        const bool branch_taken_0x2aaf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAF7Cu;
        // 0x2aaf80: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf7c) {
            ctx->pc = 0x2AAF8Cu;
            goto label_2aaf8c;
        }
    }
    ctx->pc = 0x2AAF84u;
    // 0x2aaf84: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2aaf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2aaf88: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2aaf88u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2aaf8c:
    // 0x2aaf8c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2aaf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2aaf90: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2aaf90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2aaf94: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2aaf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2aaf98: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2aaf98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2aaf9c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2aaf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aafa0: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2aafa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2aafa4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2aafa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aafa8: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2aafa8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2aafac: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2aafacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aafb0: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2aafb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2aafb4: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2aafb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aafb8: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2aafb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2aafbc: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2aafbcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2aafc0: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2AAFC0u;
    {
        const bool branch_taken_0x2aafc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAFC0u;
        // 0x2aafc4: 0xc6020010  lwc1        $f2, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aafc0) {
            ctx->pc = 0x2AB250u;
            goto label_2ab250;
        }
    }
    ctx->pc = 0x2AAFC8u;
label_2aafc8:
    // 0x2aafc8: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2AAFC8u;
    {
        const bool branch_taken_0x2aafc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAFC8u;
        // 0x2aafcc: 0x2663ce50  addiu       $v1, $s3, -0x31B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aafc8) {
            ctx->pc = 0x2AB258u;
            goto label_2ab258;
        }
    }
    ctx->pc = 0x2AAFD0u;
    // 0x2aafd0: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aafd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aafd4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2aafd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2aafd8: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2aafd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2aafdc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AAFDCu;
    {
        const bool branch_taken_0x2aafdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aafdc) {
            ctx->pc = 0x2AAFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAFDCu;
            // 0x2aafe0: 0xc6020050  lwc1        $f2, 0x50($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB000u;
            goto label_2ab000;
        }
    }
    ctx->pc = 0x2AAFE4u;
    // 0x2aafe4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aafe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aafe8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aafe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aafec: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aafecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aaff0: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AAFF0u;
    SET_GPR_U32(ctx, 31, 0x2AAFF8u);
    ctx->pc = 0x2AAFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAFF0u;
    // 0x2aaff4: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AAFF0u, 0x2AAFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAFF8u;
label_2aaff8:
    // 0x2aaff8: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2aaff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2aaffc: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2aaffcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2ab000:
    // 0x2ab000: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ab000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ab004: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab008: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2ab008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2ab00c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ab00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab010: 0x0  nop
    ctx->pc = 0x2ab010u;
    // NOP
    // 0x2ab014: 0x0  nop
    ctx->pc = 0x2ab014u;
    // NOP
    // 0x2ab018: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2ab018u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2ab01c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ab01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ab020: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ab020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ab024: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x2ab024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2ab028: 0x25034000  addiu       $v1, $t0, 0x4000
    ctx->pc = 0x2ab028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16384));
    // 0x2ab02c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2ab02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ab030: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB030u;
    {
        const bool branch_taken_0x2ab030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB030u;
        // 0x2ab034: 0x31043fff  andi        $a0, $t0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab030) {
            ctx->pc = 0x2AB040u;
            goto label_2ab040;
        }
    }
    ctx->pc = 0x2AB038u;
    // 0x2ab038: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ab038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ab03c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2ab03cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ab040:
    // 0x2ab040: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x2ab040u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x2ab044: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ab044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab048: 0x262a0340  addiu       $t2, $s1, 0x340
    ctx->pc = 0x2ab048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2ab04c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2ab04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2ab050: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2ab050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2ab054: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ab054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ab058: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ab058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ab05c: 0x31054000  andi        $a1, $t0, 0x4000
    ctx->pc = 0x2ab05cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
    // 0x2ab060: 0x31063fff  andi        $a2, $t0, 0x3FFF
    ctx->pc = 0x2ab060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16383);
    // 0x2ab064: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB064u;
    {
        const bool branch_taken_0x2ab064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB064u;
        // 0x2ab068: 0x834825  or          $t1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab064) {
            ctx->pc = 0x2AB074u;
            goto label_2ab074;
        }
    }
    ctx->pc = 0x2AB06Cu;
    // 0x2ab06c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ab06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ab070: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2ab070u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2ab074:
    // 0x2ab074: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2ab074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ab078: 0x31048000  andi        $a0, $t0, 0x8000
    ctx->pc = 0x2ab078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x2ab07c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2ab07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2ab080: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ab080u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ab084: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ab084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ab088: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2ab088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ab08c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ab08cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ab090: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x2ab090u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2ab094: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2ab094u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ab098: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2ab098u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2ab09c: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2ab09cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ab0a0: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2ab0a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ab0a4: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2ab0a4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2ab0a8: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2ab0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2ab0ac: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2ab0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ab0b0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2ab0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2ab0b4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AB0B4u;
    {
        const bool branch_taken_0x2ab0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab0b4) {
            ctx->pc = 0x2AB0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB0B4u;
            // 0x2ab0b8: 0xc602004c  lwc1        $f2, 0x4C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB0D8u;
            goto label_2ab0d8;
        }
    }
    ctx->pc = 0x2AB0BCu;
    // 0x2ab0bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ab0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ab0c0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ab0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ab0c4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ab0c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ab0c8: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AB0C8u;
    SET_GPR_U32(ctx, 31, 0x2AB0D0u);
    ctx->pc = 0x2AB0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB0C8u;
    // 0x2ab0cc: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AB0C8u, 0x2AB0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB0D0u;
label_2ab0d0:
    // 0x2ab0d0: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2ab0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2ab0d4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2ab0d4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2ab0d8:
    // 0x2ab0d8: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ab0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ab0dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab0dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab0e0: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2ab0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2ab0e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ab0e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab0e8: 0x0  nop
    ctx->pc = 0x2ab0e8u;
    // NOP
    // 0x2ab0ec: 0x0  nop
    ctx->pc = 0x2ab0ecu;
    // NOP
    // 0x2ab0f0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2ab0f0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2ab0f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ab0f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ab0f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ab0f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ab0fc: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2ab0fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ab100: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2ab100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2ab104: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2ab104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ab108: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB108u;
    {
        const bool branch_taken_0x2ab108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB108u;
        // 0x2ab10c: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab108) {
            ctx->pc = 0x2AB118u;
            goto label_2ab118;
        }
    }
    ctx->pc = 0x2AB110u;
    // 0x2ab110: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ab110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ab114: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2ab114u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ab118:
    // 0x2ab118: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ab118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab11c: 0x26290340  addiu       $t1, $s1, 0x340
    ctx->pc = 0x2ab11cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2ab120: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2ab120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2ab124: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2ab124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2ab128: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ab128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ab12c: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2ab12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2ab130: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ab130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ab134: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2ab134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2ab138: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB138u;
    {
        const bool branch_taken_0x2ab138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB138u;
        // 0x2ab13c: 0x834025  or          $t0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab138) {
            ctx->pc = 0x2AB148u;
            goto label_2ab148;
        }
    }
    ctx->pc = 0x2AB140u;
    // 0x2ab140: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ab140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ab144: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2ab144u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ab148:
    // 0x2ab148: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ab148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ab14c: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2ab14cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2ab150: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2ab150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2ab154: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ab154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ab158: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ab158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ab15c: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2ab15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ab160: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ab160u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ab164: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2ab164u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ab168: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2ab168u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ab16c: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2ab16cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2ab170: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2ab170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ab174: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2ab174u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ab178: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2ab178u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2ab17c: 0x2663ce50  addiu       $v1, $s3, -0x31B0
    ctx->pc = 0x2ab17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954576));
    // 0x2ab180: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ab180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2ab184: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2ab184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2ab188: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AB188u;
    {
        const bool branch_taken_0x2ab188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab188) {
            ctx->pc = 0x2AB18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB188u;
            // 0x2ab18c: 0xc6020048  lwc1        $f2, 0x48($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB1A8u;
            goto label_2ab1a8;
        }
    }
    ctx->pc = 0x2AB190u;
    // 0x2ab190: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ab190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ab194: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ab194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ab198: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ab198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ab19c: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AB19Cu;
    SET_GPR_U32(ctx, 31, 0x2AB1A4u);
    ctx->pc = 0x2AB1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB19Cu;
    // 0x2ab1a0: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AB19Cu, 0x2AB1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB1A4u;
label_2ab1a4:
    // 0x2ab1a4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2ab1a4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2ab1a8:
    // 0x2ab1a8: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ab1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ab1ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab1b0: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x2ab1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x2ab1b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ab1b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab1b8: 0x0  nop
    ctx->pc = 0x2ab1b8u;
    // NOP
    // 0x2ab1bc: 0x0  nop
    ctx->pc = 0x2ab1bcu;
    // NOP
    // 0x2ab1c0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2ab1c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2ab1c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ab1c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ab1c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ab1c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ab1cc: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2ab1ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ab1d0: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2ab1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2ab1d4: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2ab1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ab1d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB1D8u;
    {
        const bool branch_taken_0x2ab1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB1D8u;
        // 0x2ab1dc: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab1d8) {
            ctx->pc = 0x2AB1E8u;
            goto label_2ab1e8;
        }
    }
    ctx->pc = 0x2AB1E0u;
    // 0x2ab1e0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ab1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ab1e4: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2ab1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ab1e8:
    // 0x2ab1e8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ab1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab1ec: 0x26280340  addiu       $t0, $s1, 0x340
    ctx->pc = 0x2ab1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2ab1f0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ab1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ab1f4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2ab1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2ab1f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ab1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ab1fc: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2ab1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2ab200: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ab200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ab204: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2ab204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2ab208: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB208u;
    {
        const bool branch_taken_0x2ab208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB208u;
        // 0x2ab20c: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab208) {
            ctx->pc = 0x2AB218u;
            goto label_2ab218;
        }
    }
    ctx->pc = 0x2AB210u;
    // 0x2ab210: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ab210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ab214: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2ab214u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ab218:
    // 0x2ab218: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ab218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ab21c: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2ab21cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2ab220: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2ab220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ab224: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ab224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ab228: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ab228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ab22c: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2ab22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ab230: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ab230u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ab234: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2ab234u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2ab238: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2ab238u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ab23c: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2ab23cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2ab240: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2ab240u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ab244: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2ab244u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2ab248: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2ab248u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2ab24c: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2ab24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ab250:
    // 0x2ab250: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2ab250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab254: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2ab254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ab258:
    // 0x2ab258: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2ab258u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2ab25c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2ab25cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2ab260: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ab260u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ab264: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2ab264u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ab268: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ab268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ab26c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2ab26cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ab270: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2ab270u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ab274: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2ab274u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2ab278: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x2ab278u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2ab27c: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2ab27cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ab280: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2ab280u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ab284: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x2ab284u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ab288: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x2ab288u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2ab28c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ab28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab290: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2AB290u;
    SET_GPR_U32(ctx, 31, 0x2AB298u);
    ctx->pc = 0x2AB294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB290u;
    // 0x2ab294: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2AB290u, 0x2AB298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB298u;
label_2ab298:
    // 0x2ab298: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab29c: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2AB29Cu;
    SET_GPR_U32(ctx, 31, 0x2AB2A4u);
    ctx->pc = 0x2AB2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB29Cu;
    // 0x2ab2a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2AB29Cu, 0x2AB2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB2A4u;
label_2ab2a4:
    // 0x2ab2a4: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x2AB2A4u;
    SET_GPR_U32(ctx, 31, 0x2AB2ACu);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2AB2A4u, 0x2AB2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB2ACu;
label_2ab2ac:
    // 0x2ab2ac: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2ab2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab2b0: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x2ab2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2ab2b4: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x2ab2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ab2b8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2ab2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab2bc: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x2ab2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ab2c0: 0x46026301  sub.s       $f12, $f12, $f2
    ctx->pc = 0x2ab2c0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x2ab2c4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2ab2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab2c8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2ab2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab2cc: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2ab2ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2ab2d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ab2d4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ab2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ab2d8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2ab2d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2ab2dc: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x2ab2dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2ab2e0: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2ab2e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ab2e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2ab2e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ab2e8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ab2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2ab2ec: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x2ab2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2ab2f0: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x2ab2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ab2f4: 0xc0ca518  jal         func_329460
    ctx->pc = 0x2AB2F4u;
    SET_GPR_U32(ctx, 31, 0x2AB2FCu);
    ctx->pc = 0x2AB2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB2F4u;
    // 0x2ab2f8: 0xc60e0028  lwc1        $f14, 0x28($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x329460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329460u, 0x2AB2F4u, 0x2AB2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB2FCu;
label_2ab2fc:
    // 0x2ab2fc: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x2ab2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2ab300: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2ab300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ab304: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x2ab304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ab308: 0xc0ca548  jal         func_329520
    ctx->pc = 0x2AB308u;
    SET_GPR_U32(ctx, 31, 0x2AB310u);
    ctx->pc = 0x2AB30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB308u;
    // 0x2ab30c: 0xc7ae0008  lwc1        $f14, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x329520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329520u, 0x2AB308u, 0x2AB310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB310u;
label_2ab310:
    // 0x2ab310: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ab310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ab314:
    // 0x2ab314: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2ab314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ab318: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ab318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab31c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2ab31cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ab320: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ab320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ab324: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x2ab324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ab328: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x2ab328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ab32c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB32Cu;
        // 0x2ab330: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB334u;
    // 0x2ab334: 0x0  nop
    ctx->pc = 0x2ab334u;
    // NOP
    ctx->pc = 0x2ab338u;
}
