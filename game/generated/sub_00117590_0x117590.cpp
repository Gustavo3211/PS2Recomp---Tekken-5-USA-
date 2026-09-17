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

// Function: sub_00117590
// Address: 0x117590 - 0x117608
void sub_00117590_0x117590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117590_0x117590");
#endif

    switch (ctx->pc) {
        case 0x1175ecu: goto label_1175ec;
        default: break;
    }

    ctx->pc = 0x117590u;

    // 0x117590: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x117590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x117594: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117598: 0x8c6211ac  lw          $v0, 0x11AC($v1)
    ctx->pc = 0x117598u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1311ACu));
    // 0x11759c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11759cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1175a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1175a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1175a4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1175A4u;
    {
        const bool branch_taken_0x1175a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1175A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175A4u;
        // 0x1175a8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175a4) {
            ctx->pc = 0x1175B4u;
            goto label_1175b4;
        }
    }
    ctx->pc = 0x1175ACu;
    // 0x1175ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1175ACu;
    {
        const bool branch_taken_0x1175ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1175B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175ACu;
        // 0x1175b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175ac) {
            ctx->pc = 0x1175F8u;
            goto label_1175f8;
        }
    }
    ctx->pc = 0x1175B4u;
label_1175b4:
    // 0x1175b4: 0x3c07001f  lui         $a3, 0x1F
    ctx->pc = 0x1175b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31 << 16));
    // 0x1175b8: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1175b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1175bc: 0xace5bbc0  sw          $a1, -0x4440($a3)
    ctx->pc = 0x1175bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1EBBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBBC0u, _value); } while (0);
    // 0x1175c0: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x1175c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x1175c4: 0x2484bb40  addiu       $a0, $a0, -0x44C0
    ctx->pc = 0x1175c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949696));
    // 0x1175c8: 0x24e7bbc0  addiu       $a3, $a3, -0x4440
    ctx->pc = 0x1175c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949824));
    // 0x1175cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1175ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1175d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1175d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1175d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1175d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1175d8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1175d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1175dc: 0x2609bb80  addiu       $t1, $s0, -0x4480
    ctx->pc = 0x1175dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949760));
    // 0x1175e0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1175e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1175e4: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x1175E4u;
    SET_GPR_U32(ctx, 31, 0x1175ECu);
    ctx->pc = 0x1175E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1175E4u;
    // 0x1175e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x1175E4u, 0x1175ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1175ECu;
label_1175ec:
    // 0x1175ec: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1175ECu;
    {
        const bool branch_taken_0x1175ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1175F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175ECu;
        // 0x1175f0: 0x8e02bb80  lw          $v0, -0x4480($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175ec) {
            ctx->pc = 0x1175F8u;
            goto label_1175f8;
        }
    }
    ctx->pc = 0x1175F4u;
    // 0x1175f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1175f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1175f8:
    // 0x1175f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1175f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1175fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1175fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117600: 0x3e00008  jr          $ra
    ctx->pc = 0x117600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117600u;
        // 0x117604: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117608u;
}
