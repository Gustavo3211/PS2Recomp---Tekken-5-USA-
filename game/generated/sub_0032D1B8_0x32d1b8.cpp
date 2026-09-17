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

// Function: sub_0032D1B8
// Address: 0x32d1b8 - 0x32d220
void sub_0032D1B8_0x32d1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D1B8_0x32d1b8");
#endif

    switch (ctx->pc) {
        case 0x32d1ecu: goto label_32d1ec;
        case 0x32d208u: goto label_32d208;
        default: break;
    }

    ctx->pc = 0x32d1b8u;

    // 0x32d1b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32d1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32d1bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32d1bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d1c0: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32d1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32d1c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32d1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32d1c8: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x32d1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x32d1cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32d1ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d1d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32d1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d1d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d1d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32d1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32d1dc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x32d1dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d1e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32d1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32d1e4: 0xc0cb628  jal         func_32D8A0
    ctx->pc = 0x32D1E4u;
    SET_GPR_U32(ctx, 31, 0x32D1ECu);
    ctx->pc = 0x32D1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D1E4u;
    // 0x32d1e8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x32D1E4u, 0x32D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D1ECu;
label_32d1ec:
    // 0x32d1ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32d1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d1f0: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x32d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x32d1f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32d1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d1f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D1F8u;
    {
        const bool branch_taken_0x32d1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D1F8u;
        // 0x32d1fc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d1f8) {
            ctx->pc = 0x32D208u;
            goto label_32d208;
        }
    }
    ctx->pc = 0x32D200u;
    // 0x32d200: 0xc0caf2c  jal         func_32BCB0
    ctx->pc = 0x32D200u;
    SET_GPR_U32(ctx, 31, 0x32D208u);
    ctx->pc = 0x32BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BCB0u, 0x32D200u, 0x32D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D208u;
label_32d208:
    // 0x32d208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d20c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32d20cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d210: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32d210u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d214: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32d214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32d218: 0x3e00008  jr          $ra
    ctx->pc = 0x32D218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D218u;
        // 0x32d21c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D220u;
}
