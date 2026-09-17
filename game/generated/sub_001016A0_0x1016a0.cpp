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

// Function: sub_001016A0
// Address: 0x1016a0 - 0x101708
void sub_001016A0_0x1016a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001016A0_0x1016a0");
#endif

    switch (ctx->pc) {
        case 0x1016e4u: goto label_1016e4;
        default: break;
    }

    ctx->pc = 0x1016a0u;

    // 0x1016a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1016a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1016a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1016a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1016a8: 0x3c1001bd  lui         $s0, 0x1BD
    ctx->pc = 0x1016a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)445 << 16));
    // 0x1016ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1016acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1016b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1016b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016b4: 0x2610a1c0  addiu       $s0, $s0, -0x5E40
    ctx->pc = 0x1016b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943168));
    // 0x1016b8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1016b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1016bc: 0x346333c0  ori         $v1, $v1, 0x33C0
    ctx->pc = 0x1016bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13248);
    // 0x1016c0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1016c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1016c4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x1016c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x1016c8: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x1016c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x1016cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1016ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1016d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1016d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1016d4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1016d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1BCA1C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA1C4u, _value); } while (0);
    // 0x1016d8: 0xae11006c  sw          $s1, 0x6C($s0)
    ctx->pc = 0x1016d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x1BCA22Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA22Cu, _value); } while (0);
    // 0x1016dc: 0xc040560  jal         func_101580
    ctx->pc = 0x1016DCu;
    SET_GPR_U32(ctx, 31, 0x1016E4u);
    ctx->pc = 0x1016E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016DCu;
    // 0x1016e0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101580u, 0x1016DCu, 0x1016E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016E4u;
label_1016e4:
    // 0x1016e4: 0xae110148  sw          $s1, 0x148($s0)
    ctx->pc = 0x1016e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 17));
    // 0x1016e8: 0xae110164  sw          $s1, 0x164($s0)
    ctx->pc = 0x1016e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 17));
    // 0x1016ec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1016ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1016f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1016f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1016f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1016f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1016f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1016f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1016fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1016FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016FCu;
        // 0x101700: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1016FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101704u;
    // 0x101704: 0x0  nop
    ctx->pc = 0x101704u;
    // NOP
    ctx->pc = 0x101708u;
}
