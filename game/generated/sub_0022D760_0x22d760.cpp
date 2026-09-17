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

// Function: sub_0022D760
// Address: 0x22d760 - 0x22d818
void sub_0022D760_0x22d760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D760_0x22d760");
#endif

    switch (ctx->pc) {
        case 0x22d788u: goto label_22d788;
        case 0x22d7e4u: goto label_22d7e4;
        default: break;
    }

    ctx->pc = 0x22d760u;

    // 0x22d760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22d760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22d764: 0x46006086  mov.s       $f2, $f12
    ctx->pc = 0x22d764u;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
    // 0x22d768: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22d768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22d76c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22d76cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d770: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22d770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22d774: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22d774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d778: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22d778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22d77c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22d77cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d780: 0x1a20001e  blez        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x22D780u;
    {
        const bool branch_taken_0x22d780 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x22D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D780u;
        // 0x22d784: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d780) {
            ctx->pc = 0x22D7FCu;
            goto label_22d7fc;
        }
    }
    ctx->pc = 0x22D788u;
label_22d788:
    // 0x22d788: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x22d788u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d78c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22d78cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d790: 0xda500000  lqc2        $vf16, 0x0($s2)
    ctx->pc = 0x22d790u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22d794: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x22d794u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d798: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x22d798u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x22d79c: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x22d79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x22d7a0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x22d7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d7a4: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x22d7a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x22d7a8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x22d7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d7ac: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x22d7acu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x22d7b0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x22d7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d7b4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22d7b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22d7b8: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x22d7b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    // 0x22d7bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22d7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d7c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d7c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d7c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22d7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d7c8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22D7C8u;
    {
        const bool branch_taken_0x22d7c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7C8u;
        // 0x22d7cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d7c8) {
            ctx->pc = 0x22D7D4u;
            goto label_22d7d4;
        }
    }
    ctx->pc = 0x22D7D0u;
    // 0x22d7d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22d7d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d7d4:
    // 0x22d7d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D7D4u;
    {
        const bool branch_taken_0x22d7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d7d4) {
            ctx->pc = 0x22D7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D7D4u;
            // 0x22d7d8: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D7ECu;
            goto label_22d7ec;
        }
    }
    ctx->pc = 0x22D7DCu;
    // 0x22d7dc: 0xc08b4e4  jal         func_22D390
    ctx->pc = 0x22D7DCu;
    SET_GPR_U32(ctx, 31, 0x22D7E4u);
    ctx->pc = 0x22D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D390u, 0x22D7DCu, 0x22D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D7E4u;
label_22d7e4:
    // 0x22d7e4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x22d7e4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x22d7e8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x22d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_22d7ec:
    // 0x22d7ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22d7f0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x22d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x22d7f4: 0x1e20ffe4  bgtz        $s1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x22D7F4u;
    {
        const bool branch_taken_0x22d7f4 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x22D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7F4u;
        // 0x22d7f8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d7f4) {
            ctx->pc = 0x22D788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d788;
        }
    }
    ctx->pc = 0x22D7FCu;
label_22d7fc:
    // 0x22d7fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22d7fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d800: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x22d800u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x22d804: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22d804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22d808: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22d808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d80c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x22d80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22d810: 0x3e00008  jr          $ra
    ctx->pc = 0x22D810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D810u;
        // 0x22d814: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D818u;
}
