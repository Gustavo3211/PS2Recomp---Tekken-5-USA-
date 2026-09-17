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

// Function: sub_0021D708
// Address: 0x21d708 - 0x21d760
void sub_0021D708_0x21d708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D708_0x21d708");
#endif

    switch (ctx->pc) {
        case 0x21d720u: goto label_21d720;
        case 0x21d728u: goto label_21d728;
        case 0x21d734u: goto label_21d734;
        default: break;
    }

    ctx->pc = 0x21d708u;

    // 0x21d708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d70c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d710: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21d714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21d718: 0xc0875e4  jal         func_21D790
    ctx->pc = 0x21D718u;
    SET_GPR_U32(ctx, 31, 0x21D720u);
    ctx->pc = 0x21D71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D718u;
    // 0x21d71c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D790u, 0x21D718u, 0x21D720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D720u;
label_21d720:
    // 0x21d720: 0xc08e6a8  jal         func_239AA0
    ctx->pc = 0x21D720u;
    SET_GPR_U32(ctx, 31, 0x21D728u);
    ctx->pc = 0x21D724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D720u;
    // 0x21d724: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239AA0u, 0x21D720u, 0x21D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D728u;
label_21d728:
    // 0x21d728: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21d728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d72c: 0xc08e6a8  jal         func_239AA0
    ctx->pc = 0x21D72Cu;
    SET_GPR_U32(ctx, 31, 0x21D734u);
    ctx->pc = 0x21D730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D72Cu;
    // 0x21d730: 0x518026  xor         $s0, $v0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239AA0u, 0x21D72Cu, 0x21D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D734u;
label_21d734:
    // 0x21d734: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x21d734u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x21d738: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x21d738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x21d73c: 0x36030002  ori         $v1, $s0, 0x2
    ctx->pc = 0x21d73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x21d740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21d740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d744: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x21d744u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x21d748: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x21d748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x21d74c: 0xac50bee0  sw          $s0, -0x4120($v0)
    ctx->pc = 0x21d74cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3BBEE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BBEE0u, _value); } while (0);
    // 0x21d750: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d754: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d758: 0x3e00008  jr          $ra
    ctx->pc = 0x21D758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D758u;
        // 0x21d75c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D760u;
}
