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

// Function: sub_00335560
// Address: 0x335560 - 0x3355e8
void sub_00335560_0x335560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335560_0x335560");
#endif

    switch (ctx->pc) {
        case 0x335578u: goto label_335578;
        case 0x335584u: goto label_335584;
        case 0x335594u: goto label_335594;
        case 0x3355d0u: goto label_3355d0;
        case 0x3355d8u: goto label_3355d8;
        default: break;
    }

    ctx->pc = 0x335560u;

    // 0x335560: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x335560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x335564: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33556c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33556cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x335570: 0xc0cd602  jal         func_335808
    ctx->pc = 0x335570u;
    SET_GPR_U32(ctx, 31, 0x335578u);
    ctx->pc = 0x335574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335570u;
    // 0x335574: 0x34840010  ori         $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335808u, 0x335570u, 0x335578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335578u;
label_335578:
    // 0x335578: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x335578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33557c: 0xc0cd5e0  jal         func_335780
    ctx->pc = 0x33557Cu;
    SET_GPR_U32(ctx, 31, 0x335584u);
    ctx->pc = 0x335580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33557Cu;
    // 0x335580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335780u, 0x33557Cu, 0x335584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335584u;
label_335584:
    // 0x335584: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x335584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x335588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33558c: 0xc0cd5e0  jal         func_335780
    ctx->pc = 0x33558Cu;
    SET_GPR_U32(ctx, 31, 0x335594u);
    ctx->pc = 0x335590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33558Cu;
    // 0x335590: 0x3c107000  lui         $s0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335780u, 0x33558Cu, 0x335594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335594u;
label_335594:
    // 0x335594: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x335594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x335598: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x335598u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x33559c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x33559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3355a0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x3355a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x3355a4: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x3355a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x3355a8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3355a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3355ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3355acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3355b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3355b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3355b4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3355b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3355b8: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x3355b8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3355bc: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x3355bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x3355c0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3355c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3355c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3355c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3355c8: 0xc0cd0dc  jal         func_334370
    ctx->pc = 0x3355C8u;
    SET_GPR_U32(ctx, 31, 0x3355D0u);
    ctx->pc = 0x3355CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3355C8u;
    // 0x3355cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334370u, 0x3355C8u, 0x3355D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3355D0u;
label_3355d0:
    // 0x3355d0: 0xc0cd15c  jal         func_334570
    ctx->pc = 0x3355D0u;
    SET_GPR_U32(ctx, 31, 0x3355D8u);
    ctx->pc = 0x334570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334570u, 0x3355D0u, 0x3355D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3355D8u;
label_3355d8:
    // 0x3355d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3355d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3355dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3355dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3355e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3355E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3355E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3355E0u;
        // 0x3355e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3355E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3355E8u;
}
