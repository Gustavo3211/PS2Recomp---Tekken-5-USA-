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

// Function: sub_0022D8D0
// Address: 0x22d8d0 - 0x22d9c8
void sub_0022D8D0_0x22d8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D8D0_0x22d8d0");
#endif

    switch (ctx->pc) {
        case 0x22d8f8u: goto label_22d8f8;
        case 0x22d90cu: goto label_22d90c;
        case 0x22d920u: goto label_22d920;
        case 0x22d97cu: goto label_22d97c;
        case 0x22d994u: goto label_22d994;
        default: break;
    }

    ctx->pc = 0x22d8d0u;

    // 0x22d8d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22d8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22d8d4: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x22d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x22d8d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22d8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22d8dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22d8dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d8e0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x22d8e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22d8e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22d8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22d8e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22d8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22d8ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x22d8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x22d8f0: 0xc08b8a6  jal         func_22E298
    ctx->pc = 0x22D8F0u;
    SET_GPR_U32(ctx, 31, 0x22D8F8u);
    ctx->pc = 0x22D8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8F0u;
    // 0x22d8f4: 0xc4542d8c  lwc1        $f20, 0x2D8C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E298u, 0x22D8F0u, 0x22D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8F8u;
label_22d8f8:
    // 0x22d8f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d8f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d8fc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x22D8FCu;
    {
        const bool branch_taken_0x22d8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8FCu;
        // 0x22d900: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d8fc) {
            ctx->pc = 0x22D9ACu;
            goto label_22d9ac;
        }
    }
    ctx->pc = 0x22D904u;
    // 0x22d904: 0xc08b3ea  jal         func_22CFA8
    ctx->pc = 0x22D904u;
    SET_GPR_U32(ctx, 31, 0x22D90Cu);
    ctx->pc = 0x22CFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CFA8u, 0x22D904u, 0x22D90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D90Cu;
label_22d90c:
    // 0x22d90c: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x22d90cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x22d910: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x22D910u;
    {
        const bool branch_taken_0x22d910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D910u;
        // 0x22d914: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d910) {
            ctx->pc = 0x22D9A4u;
            goto label_22d9a4;
        }
    }
    ctx->pc = 0x22D918u;
    // 0x22d918: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x22d918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x22d91c: 0x0  nop
    ctx->pc = 0x22d91cu;
    // NOP
label_22d920:
    // 0x22d920: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x22d920u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d924: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22d924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d928: 0xda300000  lqc2        $vf16, 0x0($s1)
    ctx->pc = 0x22d928u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22d92c: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x22d92cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d930: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x22d930u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x22d934: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x22d934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x22d938: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x22d938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d93c: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x22d93cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x22d940: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x22d940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d944: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x22d944u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x22d948: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x22d948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d94c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d94cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d950: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22D950u;
    {
        const bool branch_taken_0x22d950 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D950u;
        // 0x22d954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d950) {
            ctx->pc = 0x22D95Cu;
            goto label_22d95c;
        }
    }
    ctx->pc = 0x22D958u;
    // 0x22d958: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22d958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d95c:
    // 0x22d95c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x22D95Cu;
    {
        const bool branch_taken_0x22d95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d95c) {
            ctx->pc = 0x22D960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D95Cu;
            // 0x22d960: 0x8e10001c  lw          $s0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D99Cu;
            goto label_22d99c;
        }
    }
    ctx->pc = 0x22D964u;
    // 0x22d964: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x22d964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x22d968: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x22D968u;
    {
        const bool branch_taken_0x22d968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x22D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D968u;
        // 0x22d96c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d968) {
            ctx->pc = 0x22D988u;
            goto label_22d988;
        }
    }
    ctx->pc = 0x22D970u;
    // 0x22d970: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22d970u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22d974: 0xc08b4e4  jal         func_22D390
    ctx->pc = 0x22D974u;
    SET_GPR_U32(ctx, 31, 0x22D97Cu);
    ctx->pc = 0x22D978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D974u;
    // 0x22d978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D390u, 0x22D974u, 0x22D97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D97Cu;
label_22d97c:
    // 0x22d97c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22D97Cu;
    {
        const bool branch_taken_0x22d97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D97Cu;
        // 0x22d980: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d97c) {
            ctx->pc = 0x22D998u;
            goto label_22d998;
        }
    }
    ctx->pc = 0x22D984u;
    // 0x22d984: 0x0  nop
    ctx->pc = 0x22d984u;
    // NOP
label_22d988:
    // 0x22d988: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22d988u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22d98c: 0xc08b5d8  jal         func_22D760
    ctx->pc = 0x22D98Cu;
    SET_GPR_U32(ctx, 31, 0x22D994u);
    ctx->pc = 0x22D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D98Cu;
    // 0x22d990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D760u, 0x22D98Cu, 0x22D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D994u;
label_22d994:
    // 0x22d994: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22d994u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_22d998:
    // 0x22d998: 0x8e10001c  lw          $s0, 0x1C($s0)
    ctx->pc = 0x22d998u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_22d99c:
    // 0x22d99c: 0x1600ffe0  bnez        $s0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x22D99Cu;
    {
        const bool branch_taken_0x22d99c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D99Cu;
        // 0x22d9a0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d99c) {
            ctx->pc = 0x22D920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d920;
        }
    }
    ctx->pc = 0x22D9A4u;
label_22d9a4:
    // 0x22d9a4: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x22d9a4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x22d9a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22d9a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22d9ac:
    // 0x22d9ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22d9acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22d9b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22d9b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d9b4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x22d9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22d9b8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x22d9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22d9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x22D9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9BCu;
        // 0x22d9c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D9C4u;
    // 0x22d9c4: 0x0  nop
    ctx->pc = 0x22d9c4u;
    // NOP
    ctx->pc = 0x22d9c8u;
}
