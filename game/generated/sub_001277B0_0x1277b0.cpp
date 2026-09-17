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

// Function: sub_001277B0
// Address: 0x1277b0 - 0x127818
void sub_001277B0_0x1277b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001277B0_0x1277b0");
#endif

    switch (ctx->pc) {
        case 0x1277dcu: goto label_1277dc;
        case 0x1277ecu: goto label_1277ec;
        case 0x1277f8u: goto label_1277f8;
        default: break;
    }

    ctx->pc = 0x1277b0u;

    // 0x1277b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1277b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1277b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1277b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1277b8: 0x3c100013  lui         $s0, 0x13
    ctx->pc = 0x1277b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
    // 0x1277bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1277bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1277c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1277c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1277c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1277c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1277c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1277ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1277d0: 0x26104728  addiu       $s0, $s0, 0x4728
    ctx->pc = 0x1277d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18216));
    // 0x1277d4: 0xc04a182  jal         func_128608
    ctx->pc = 0x1277D4u;
    SET_GPR_U32(ctx, 31, 0x1277DCu);
    ctx->pc = 0x1277D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1277D4u;
    // 0x1277d8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128608u, 0x1277D4u, 0x1277DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1277DCu;
label_1277dc:
    // 0x1277dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1277dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1277e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1277e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277e4: 0xc049e06  jal         func_127818
    ctx->pc = 0x1277E4u;
    SET_GPR_U32(ctx, 31, 0x1277ECu);
    ctx->pc = 0x1277E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1277E4u;
    // 0x1277e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127818u, 0x1277E4u, 0x1277ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1277ECu;
label_1277ec:
    // 0x1277ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1277ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1277f0: 0xc04a1a2  jal         func_128688
    ctx->pc = 0x1277F0u;
    SET_GPR_U32(ctx, 31, 0x1277F8u);
    ctx->pc = 0x1277F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1277F0u;
    // 0x1277f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128688u, 0x1277F0u, 0x1277F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1277F8u;
label_1277f8:
    // 0x1277f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1277f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1277fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127800: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127804: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x127804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127808: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x127808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12780c: 0x3e00008  jr          $ra
    ctx->pc = 0x12780Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12780Cu;
        // 0x127810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12780Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127814u;
    // 0x127814: 0x0  nop
    ctx->pc = 0x127814u;
    // NOP
    ctx->pc = 0x127818u;
}
