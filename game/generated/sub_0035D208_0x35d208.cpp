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

// Function: sub_0035D208
// Address: 0x35d208 - 0x35d270
void sub_0035D208_0x35d208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D208_0x35d208");
#endif

    switch (ctx->pc) {
        case 0x35d24cu: goto label_35d24c;
        case 0x35d254u: goto label_35d254;
        default: break;
    }

    ctx->pc = 0x35d208u;

    // 0x35d208: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35d208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d20c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35d20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35d210: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x35d210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x35d214: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x35d214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x35d218: 0x21e3b  dsra        $v1, $v0, 24
    ctx->pc = 0x35d218u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> 24);
    // 0x35d21c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d21cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d220: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x35d220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x35d224: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x35d224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x35d228: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35d228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d22c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x35d22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x35d230: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35d230u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x35d234: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35d234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35d238: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35d238u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35d23c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d240: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x35d240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x35d244: 0xc0d6f3a  jal         func_35BCE8
    ctx->pc = 0x35D244u;
    SET_GPR_U32(ctx, 31, 0x35D24Cu);
    ctx->pc = 0x35D248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D244u;
    // 0x35d248: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BCE8u, 0x35D244u, 0x35D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D24Cu;
label_35d24c:
    // 0x35d24c: 0xc0d6ee8  jal         func_35BBA0
    ctx->pc = 0x35D24Cu;
    SET_GPR_U32(ctx, 31, 0x35D254u);
    ctx->pc = 0x35D250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D24Cu;
    // 0x35d250: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BBA0u, 0x35D24Cu, 0x35D254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D254u;
label_35d254:
    // 0x35d254: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35d254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35d258: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x35d258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x35d25c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d260: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x35d260u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x35d264: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x35d264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d268: 0x3e00008  jr          $ra
    ctx->pc = 0x35D268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D268u;
        // 0x35d26c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D270u;
}
