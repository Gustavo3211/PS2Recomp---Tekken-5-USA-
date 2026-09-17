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

// Function: sub_00349608
// Address: 0x349608 - 0x3496d0
void sub_00349608_0x349608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349608_0x349608");
#endif

    switch (ctx->pc) {
        case 0x3496a4u: goto label_3496a4;
        default: break;
    }

    ctx->pc = 0x349608u;

    // 0x349608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34960c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34960cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x349610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x349610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349614: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x349614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x349618: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x349618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34961c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x34961Cu;
    {
        const bool branch_taken_0x34961c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34961Cu;
        // 0x349620: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34961c) {
            ctx->pc = 0x3496B8u;
            goto label_3496b8;
        }
    }
    ctx->pc = 0x349624u;
    // 0x349624: 0xda3c0000  lqc2        $vf28, 0x0($s1)
    ctx->pc = 0x349624u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349628: 0xda3d0010  lqc2        $vf29, 0x10($s1)
    ctx->pc = 0x349628u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x34962c: 0xda3e0020  lqc2        $vf30, 0x20($s1)
    ctx->pc = 0x34962cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x349630: 0xda3f0030  lqc2        $vf31, 0x30($s1)
    ctx->pc = 0x349630u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x349634: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x349634u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x349638: 0x24d00d00  addiu       $s0, $a2, 0xD00
    ctx->pc = 0x349638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 3328));
    // 0x34963c: 0x4824e000  qmfc2.ni    $a0, $vf28
    ctx->pc = 0x34963cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x349640: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x349640u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x349644: 0x708310a8  pceqw       $v0, $a0, $v1
    ctx->pc = 0x349644u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x349648: 0x4824e800  qmfc2.ni    $a0, $vf29
    ctx->pc = 0x349648u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x34964c: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x34964cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x349650: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x349650u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x349654: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x349654u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x349658: 0x4824f000  qmfc2.ni    $a0, $vf30
    ctx->pc = 0x349658u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x34965c: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x34965cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x349660: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x349660u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x349664: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x349664u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x349668: 0x4824f800  qmfc2.ni    $a0, $vf31
    ctx->pc = 0x349668u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x34966c: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x34966cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x349670: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x349670u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x349674: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x349674u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x349678: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x349678u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x34967c: 0x70422ec8  ppacb       $a1, $v0, $v0
    ctx->pc = 0x34967cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x349680: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x349680u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x349684: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x349684u;
    {
        const bool branch_taken_0x349684 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x349684) {
            ctx->pc = 0x349688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349684u;
            // 0x349688: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3496B8u;
            goto label_3496b8;
        }
    }
    ctx->pc = 0x34968Cu;
    // 0x34968c: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x34968cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x349690: 0xfa1d0010  sqc2        $vf29, 0x10($s0)
    ctx->pc = 0x349690u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x349694: 0xfa1e0020  sqc2        $vf30, 0x20($s0)
    ctx->pc = 0x349694u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x349698: 0xfa1f0030  sqc2        $vf31, 0x30($s0)
    ctx->pc = 0x349698u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x34969c: 0xc0c88a2  jal         func_322288
    ctx->pc = 0x34969Cu;
    SET_GPR_U32(ctx, 31, 0x3496A4u);
    ctx->pc = 0x3496A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34969Cu;
    // 0x3496a0: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322288u, 0x34969Cu, 0x3496A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3496A4u;
label_3496a4:
    // 0x3496a4: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x3496a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3496a8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3496a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3496ac: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3496acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3496b0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x3496b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x3496b4: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x3496b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_3496b8:
    // 0x3496b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3496b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3496bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3496bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3496c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3496c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3496c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3496C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3496C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3496C4u;
        // 0x3496c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3496C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3496CCu;
    // 0x3496cc: 0x0  nop
    ctx->pc = 0x3496ccu;
    // NOP
    ctx->pc = 0x3496d0u;
}
