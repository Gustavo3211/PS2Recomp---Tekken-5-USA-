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

// Function: sub_002CB888
// Address: 0x2cb888 - 0x2cb910
void sub_002CB888_0x2cb888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB888_0x2cb888");
#endif

    switch (ctx->pc) {
        case 0x2cb8a4u: goto label_2cb8a4;
        case 0x2cb8acu: goto label_2cb8ac;
        case 0x2cb8b4u: goto label_2cb8b4;
        case 0x2cb8dcu: goto label_2cb8dc;
        case 0x2cb8e8u: goto label_2cb8e8;
        case 0x2cb8f4u: goto label_2cb8f4;
        default: break;
    }

    ctx->pc = 0x2cb888u;

    // 0x2cb888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cb888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cb88c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cb88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb890: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cb890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cb894: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cb894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cb898: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2cb898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2cb89c: 0xc08661c  jal         func_219870
    ctx->pc = 0x2CB89Cu;
    SET_GPR_U32(ctx, 31, 0x2CB8A4u);
    ctx->pc = 0x2CB8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB89Cu;
    // 0x2cb8a0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219870u, 0x2CB89Cu, 0x2CB8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB8A4u;
label_2cb8a4:
    // 0x2cb8a4: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2CB8A4u;
    SET_GPR_U32(ctx, 31, 0x2CB8ACu);
    ctx->pc = 0x2CB8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB8A4u;
    // 0x2cb8a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2CB8A4u, 0x2CB8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB8ACu;
label_2cb8ac:
    // 0x2cb8ac: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2CB8ACu;
    SET_GPR_U32(ctx, 31, 0x2CB8B4u);
    ctx->pc = 0x2CB8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB8ACu;
    // 0x2cb8b0: 0x28100  sll         $s0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2CB8ACu, 0x2CB8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB8B4u;
label_2cb8b4:
    // 0x2cb8b4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cb8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cb8b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cb8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cb8bc: 0x2421f61c  addiu       $at, $at, -0x9E4
    ctx->pc = 0x2cb8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294964764));
    // 0x2cb8c0: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x2cb8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2cb8c4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2cb8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cb8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2cb8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2cb8d0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2cb8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2cb8d4: 0xc0da92c  jal         func_36A4B0
    ctx->pc = 0x2CB8D4u;
    SET_GPR_U32(ctx, 31, 0x2CB8DCu);
    ctx->pc = 0x2CB8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB8D4u;
    // 0x2cb8d8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A4B0u, 0x2CB8D4u, 0x2CB8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB8DCu;
label_2cb8dc:
    // 0x2cb8dc: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x2cb8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x2cb8e0: 0xc0c2314  jal         func_308C50
    ctx->pc = 0x2CB8E0u;
    SET_GPR_U32(ctx, 31, 0x2CB8E8u);
    ctx->pc = 0x2CB8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB8E0u;
    // 0x2cb8e4: 0x8e450084  lw          $a1, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308C50u, 0x2CB8E0u, 0x2CB8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB8E8u;
label_2cb8e8:
    // 0x2cb8e8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2cb8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2cb8ec: 0xc084cfe  jal         func_2133F8
    ctx->pc = 0x2CB8ECu;
    SET_GPR_U32(ctx, 31, 0x2CB8F4u);
    ctx->pc = 0x2CB8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB8ECu;
    // 0x2cb8f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2133F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2133F8u, 0x2CB8ECu, 0x2CB8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB8F4u;
label_2cb8f4:
    // 0x2cb8f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb8f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cb8f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cb8fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cb8fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb900: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cb900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cb904: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB904u;
        // 0x2cb908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB90Cu;
    // 0x2cb90c: 0x0  nop
    ctx->pc = 0x2cb90cu;
    // NOP
    ctx->pc = 0x2cb910u;
}
