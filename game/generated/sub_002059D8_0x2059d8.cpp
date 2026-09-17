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

// Function: sub_002059D8
// Address: 0x2059d8 - 0x205b10
void sub_002059D8_0x2059d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002059D8_0x2059d8");
#endif

    switch (ctx->pc) {
        case 0x205a00u: goto label_205a00;
        case 0x205a48u: goto label_205a48;
        case 0x205a5cu: goto label_205a5c;
        case 0x205a6cu: goto label_205a6c;
        case 0x205a88u: goto label_205a88;
        default: break;
    }

    ctx->pc = 0x2059d8u;

    // 0x2059d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2059d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2059dc: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2059dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2059e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2059e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2059e4: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2059e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x2059e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2059e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2059ec: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2059ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2059f0: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2059f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2059f4: 0xc4ac0008  lwc1        $f12, 0x8($a1)
    ctx->pc = 0x2059f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2059f8: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x2059F8u;
    SET_GPR_U32(ctx, 31, 0x205A00u);
    ctx->pc = 0x2059FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2059F8u;
    // 0x2059fc: 0xc4ad0000  lwc1        $f13, 0x0($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x2059F8u, 0x205A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A00u;
label_205a00:
    // 0x205a00: 0xc7818320  lwc1        $f1, -0x7CE0($gp)
    ctx->pc = 0x205a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205a04: 0xc7828324  lwc1        $f2, -0x7CDC($gp)
    ctx->pc = 0x205a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x205a08: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x205a08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x205a0c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x205a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205a10: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x205A10u;
    {
        const bool branch_taken_0x205a10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x205A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A10u;
        // 0x205a14: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a10) {
            ctx->pc = 0x205A28u;
            goto label_205a28;
        }
    }
    ctx->pc = 0x205A18u;
    // 0x205a18: 0xc7808328  lwc1        $f0, -0x7CD8($gp)
    ctx->pc = 0x205a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205a1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x205A1Cu;
    {
        const bool branch_taken_0x205a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A1Cu;
        // 0x205a20: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a1c) {
            ctx->pc = 0x205A40u;
            goto label_205a40;
        }
    }
    ctx->pc = 0x205A24u;
    // 0x205a24: 0x0  nop
    ctx->pc = 0x205a24u;
    // NOP
label_205a28:
    // 0x205a28: 0xc780832c  lwc1        $f0, -0x7CD4($gp)
    ctx->pc = 0x205a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205a2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x205a2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205a30: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x205A30u;
    {
        const bool branch_taken_0x205a30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x205a30) {
            ctx->pc = 0x205A40u;
            goto label_205a40;
        }
    }
    ctx->pc = 0x205A38u;
    // 0x205a38: 0xc7808330  lwc1        $f0, -0x7CD0($gp)
    ctx->pc = 0x205a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205a3c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x205a3cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_205a40:
    // 0x205a40: 0xc084cb0  jal         func_2132C0
    ctx->pc = 0x205A40u;
    SET_GPR_U32(ctx, 31, 0x205A48u);
    ctx->pc = 0x205A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A40u;
    // 0x205a44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132C0u, 0x205A40u, 0x205A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A48u;
label_205a48:
    // 0x205a48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x205a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205a4c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x205a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x205a50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x205a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205a54: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x205A54u;
    SET_GPR_U32(ctx, 31, 0x205A5Cu);
    ctx->pc = 0x205A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A54u;
    // 0x205a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x205A54u, 0x205A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A5Cu;
label_205a5c:
    // 0x205a5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x205a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205a60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x205a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x205a64: 0xc08491e  jal         func_212478
    ctx->pc = 0x205A64u;
    SET_GPR_U32(ctx, 31, 0x205A6Cu);
    ctx->pc = 0x205A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A64u;
    // 0x205a68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x205A64u, 0x205A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A6Cu;
label_205a6c:
    // 0x205a6c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x205a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x205a70: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x205a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x205a74: 0xc4442104  lwc1        $f4, 0x2104($v0)
    ctx->pc = 0x205a74u;
    { uint32_t bits = FAST_READ32(0x152104u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x205a78: 0xc4632108  lwc1        $f3, 0x2108($v1)
    ctx->pc = 0x205a78u;
    { uint32_t bits = FAST_READ32(0x152108u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x205a7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x205a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205a80: 0x46002206  mov.s       $f8, $f4
    ctx->pc = 0x205a80u;
    ctx->f[8] = FPU_MOV_S(ctx->f[4]);
    // 0x205a84: 0x460019c6  mov.s       $f7, $f3
    ctx->pc = 0x205a84u;
    ctx->f[7] = FPU_MOV_S(ctx->f[3]);
label_205a88:
    // 0x205a88: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x205a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x205a8c: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x205a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x205a90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x205a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205a94: 0x46040169  min.s       $f5, $f0, $f4
    ctx->pc = 0x205a94u;
    ctx->f[5] = std::min(ctx->f[0], ctx->f[4]);
    // 0x205a98: 0x46002906  mov.s       $f4, $f5
    ctx->pc = 0x205a98u;
    ctx->f[4] = FPU_MOV_S(ctx->f[5]);
    // 0x205a9c: 0x460301a8  max.s       $f6, $f0, $f3
    ctx->pc = 0x205a9cu;
    ctx->f[6] = std::max(ctx->f[0], ctx->f[3]);
    // 0x205aa0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x205aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x205aa4: 0x460030c6  mov.s       $f3, $f6
    ctx->pc = 0x205aa4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[6]);
    // 0x205aa8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x205aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205aac: 0x460800a9  min.s       $f2, $f0, $f8
    ctx->pc = 0x205aacu;
    ctx->f[2] = std::min(ctx->f[0], ctx->f[8]);
    // 0x205ab0: 0x46001206  mov.s       $f8, $f2
    ctx->pc = 0x205ab0u;
    ctx->f[8] = FPU_MOV_S(ctx->f[2]);
    // 0x205ab4: 0x46070068  max.s       $f1, $f0, $f7
    ctx->pc = 0x205ab4u;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[7]);
    // 0x205ab8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x205ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x205abc: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x205abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x205ac0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x205AC0u;
    {
        const bool branch_taken_0x205ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AC0u;
        // 0x205ac4: 0x460009c6  mov.s       $f7, $f1 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ac0) {
            ctx->pc = 0x205A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205a88;
        }
    }
    ctx->pc = 0x205AC8u;
    // 0x205ac8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x205ac8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x205acc: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x205accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x205ad0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x205ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205ad4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x205ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205ad8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x205AD8u;
    {
        const bool branch_taken_0x205ad8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x205ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AD8u;
        // 0x205adc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ad8) {
            ctx->pc = 0x205AFCu;
            goto label_205afc;
        }
    }
    ctx->pc = 0x205AE0u;
    // 0x205ae0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x205ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205ae4: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x205ae4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205ae8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x205AE8u;
    {
        const bool branch_taken_0x205ae8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x205AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AE8u;
        // 0x205aec: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ae8) {
            ctx->pc = 0x205B00u;
            goto label_205b00;
        }
    }
    ctx->pc = 0x205AF0u;
    // 0x205af0: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x205af0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205af4: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x205AF4u;
    {
        const bool branch_taken_0x205af4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205af4) {
            ctx->pc = 0x205AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205AF4u;
            // 0x205af8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205B00u;
            goto label_205b00;
        }
    }
    ctx->pc = 0x205AFCu;
label_205afc:
    // 0x205afc: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x205afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_205b00:
    // 0x205b00: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x205b00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x205b04: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x205b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x205b08: 0x3e00008  jr          $ra
    ctx->pc = 0x205B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B08u;
        // 0x205b0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205B10u;
}
