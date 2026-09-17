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

// Function: sub_0022D818
// Address: 0x22d818 - 0x22d8d0
void sub_0022D818_0x22d818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D818_0x22d818");
#endif

    switch (ctx->pc) {
        case 0x22d840u: goto label_22d840;
        case 0x22d89cu: goto label_22d89c;
        default: break;
    }

    ctx->pc = 0x22d818u;

    // 0x22d818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22d818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22d81c: 0x46006086  mov.s       $f2, $f12
    ctx->pc = 0x22d81cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
    // 0x22d820: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22d820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22d824: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22d824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d828: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22d828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22d82c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22d82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d830: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22d830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22d834: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22d834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d838: 0x1a20001e  blez        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x22D838u;
    {
        const bool branch_taken_0x22d838 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x22D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D838u;
        // 0x22d83c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d838) {
            ctx->pc = 0x22D8B4u;
            goto label_22d8b4;
        }
    }
    ctx->pc = 0x22D840u;
label_22d840:
    // 0x22d840: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x22d840u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d844: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22d844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d848: 0xda500000  lqc2        $vf16, 0x0($s2)
    ctx->pc = 0x22d848u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22d84c: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x22d84cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d850: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x22d850u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x22d854: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x22d854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x22d858: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x22d858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d85c: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x22d85cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x22d860: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x22d860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d864: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x22d864u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x22d868: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x22d868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d86c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22d86cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22d870: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x22d870u;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    // 0x22d874: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22d874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d878: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d87c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22d87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d880: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22D880u;
    {
        const bool branch_taken_0x22d880 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D880u;
        // 0x22d884: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d880) {
            ctx->pc = 0x22D88Cu;
            goto label_22d88c;
        }
    }
    ctx->pc = 0x22D888u;
    // 0x22d888: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22d888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d88c:
    // 0x22d88c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D88Cu;
    {
        const bool branch_taken_0x22d88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d88c) {
            ctx->pc = 0x22D890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D88Cu;
            // 0x22d890: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D8A4u;
            goto label_22d8a4;
        }
    }
    ctx->pc = 0x22D894u;
    // 0x22d894: 0xc08b55e  jal         func_22D578
    ctx->pc = 0x22D894u;
    SET_GPR_U32(ctx, 31, 0x22D89Cu);
    ctx->pc = 0x22D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D578u, 0x22D894u, 0x22D89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D89Cu;
label_22d89c:
    // 0x22d89c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x22d89cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x22d8a0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x22d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_22d8a4:
    // 0x22d8a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22d8a8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x22d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x22d8ac: 0x1e20ffe4  bgtz        $s1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x22D8ACu;
    {
        const bool branch_taken_0x22d8ac = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x22D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8ACu;
        // 0x22d8b0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d8ac) {
            ctx->pc = 0x22D840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d840;
        }
    }
    ctx->pc = 0x22D8B4u;
label_22d8b4:
    // 0x22d8b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22d8b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d8b8: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x22d8b8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x22d8bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22d8bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22d8c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22d8c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d8c4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x22d8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22d8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x22D8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8C8u;
        // 0x22d8cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D8D0u;
}
