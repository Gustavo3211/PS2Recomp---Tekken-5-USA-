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

// Function: sub_001007C8
// Address: 0x1007c8 - 0x100878
void sub_001007C8_0x1007c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001007C8_0x1007c8");
#endif

    ctx->pc = 0x1007c8u;

    // 0x1007c8: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x1007c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x1007cc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1007ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1007d0: 0x3463b540  ori         $v1, $v1, 0xB540
    ctx->pc = 0x1007d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46400);
    // 0x1007d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1007d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1007d8: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x1007d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x1007dc: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x1007dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x1007e0: 0x34a55580  ori         $a1, $a1, 0x5580
    ctx->pc = 0x1007e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21888);
    // 0x1007e4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1007e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1007e8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1007e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1007ec: 0x34c69580  ori         $a2, $a2, 0x9580
    ctx->pc = 0x1007ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)38272);
    // 0x1007f0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1007f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1007f4: 0x3c070019  lui         $a3, 0x19
    ctx->pc = 0x1007f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
    // 0x1007f8: 0x34e7ee00  ori         $a3, $a3, 0xEE00
    ctx->pc = 0x1007f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)60928);
    // 0x1007fc: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x1007fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x100800: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x100800u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
    // 0x100804: 0x3508b0c0  ori         $t0, $t0, 0xB0C0
    ctx->pc = 0x100804u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)45248);
    // 0x100808: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x100808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x10080c: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x10080cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
    // 0x100810: 0x3529b4c0  ori         $t1, $t1, 0xB4C0
    ctx->pc = 0x100810u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)46272);
    // 0x100814: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x100814u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x100818: 0x3c0a0021  lui         $t2, 0x21
    ctx->pc = 0x100818u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)33 << 16));
    // 0x10081c: 0x354ace40  ori         $t2, $t2, 0xCE40
    ctx->pc = 0x10081cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)52800);
    // 0x100820: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x100820u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x100824: 0x3c0b0021  lui         $t3, 0x21
    ctx->pc = 0x100824u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)33 << 16));
    // 0x100828: 0x356bd240  ori         $t3, $t3, 0xD240
    ctx->pc = 0x100828u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)53824);
    // 0x10082c: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x10082cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x100830: 0x3c0c0022  lui         $t4, 0x22
    ctx->pc = 0x100830u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)34 << 16));
    // 0x100834: 0x358cca40  ori         $t4, $t4, 0xCA40
    ctx->pc = 0x100834u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)51776);
    // 0x100838: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x100838u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x10083c: 0x3c0d0022  lui         $t5, 0x22
    ctx->pc = 0x10083cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)34 << 16));
    // 0x100840: 0x35adce40  ori         $t5, $t5, 0xCE40
    ctx->pc = 0x100840u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)52800);
    // 0x100844: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x100844u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x100848: 0xac4300b4  sw          $v1, 0xB4($v0)
    ctx->pc = 0x100848u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1BCA274u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA274u, _value); } while (0);
    // 0x10084c: 0xac450090  sw          $a1, 0x90($v0)
    ctx->pc = 0x10084cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1BCA250u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA250u, _value); } while (0);
    // 0x100850: 0xac460094  sw          $a2, 0x94($v0)
    ctx->pc = 0x100850u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1BCA254u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA254u, _value); } while (0);
    // 0x100854: 0xac470098  sw          $a3, 0x98($v0)
    ctx->pc = 0x100854u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1BCA258u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA258u, _value); } while (0);
    // 0x100858: 0xac48009c  sw          $t0, 0x9C($v0)
    ctx->pc = 0x100858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1BCA25Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA25Cu, _value); } while (0);
    // 0x10085c: 0xac4900a0  sw          $t1, 0xA0($v0)
    ctx->pc = 0x10085cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x1BCA260u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA260u, _value); } while (0);
    // 0x100860: 0xac4a00a4  sw          $t2, 0xA4($v0)
    ctx->pc = 0x100860u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x1BCA264u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA264u, _value); } while (0);
    // 0x100864: 0xac4b00a8  sw          $t3, 0xA8($v0)
    ctx->pc = 0x100864u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x1BCA268u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA268u, _value); } while (0);
    // 0x100868: 0xac4c00ac  sw          $t4, 0xAC($v0)
    ctx->pc = 0x100868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x1BCA26Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA26Cu, _value); } while (0);
    // 0x10086c: 0xac4d00b0  sw          $t5, 0xB0($v0)
    ctx->pc = 0x10086cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x1BCA270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA270u, _value); } while (0);
    // 0x100870: 0x3e00008  jr          $ra
    ctx->pc = 0x100870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100870u;
        // 0x100874: 0xac44008c  sw          $a0, 0x8C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100878u;
}
