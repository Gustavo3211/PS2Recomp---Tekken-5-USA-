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

// Function: sub_0024C0E8
// Address: 0x24c0e8 - 0x24c138
void sub_0024C0E8_0x24c0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C0E8_0x24c0e8");
#endif

    switch (ctx->pc) {
        case 0x24c118u: goto label_24c118;
        default: break;
    }

    ctx->pc = 0x24c0e8u;

    // 0x24c0e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c0ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c0f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24c0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c0f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c0f8: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x24c0f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x24c0fc: 0x263183c0  addiu       $s1, $s1, -0x7C40
    ctx->pc = 0x24c0fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935488));
    // 0x24c100: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x24c100u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x24c104: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x24c104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x24c108: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24c108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24c10c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24c10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24c110: 0xc093020  jal         func_24C080
    ctx->pc = 0x24C110u;
    SET_GPR_U32(ctx, 31, 0x24C118u);
    ctx->pc = 0x24C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C110u;
    // 0x24c114: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C080u, 0x24C110u, 0x24C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C118u;
label_24c118:
    // 0x24c118: 0x9602004e  lhu         $v0, 0x4E($s0)
    ctx->pc = 0x24c118u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x24c11c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c11cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c120: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x24c120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
    // 0x24c124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c128: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24c128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c12c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24c12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c130: 0x3e00008  jr          $ra
    ctx->pc = 0x24C130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C130u;
        // 0x24c134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C138u;
}
