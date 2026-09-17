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

// Function: sub_0028A020
// Address: 0x28a020 - 0x28a060
void sub_0028A020_0x28a020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A020_0x28a020");
#endif

    switch (ctx->pc) {
        case 0x28a034u: goto label_28a034;
        case 0x28a048u: goto label_28a048;
        case 0x28a050u: goto label_28a050;
        case 0x28a058u: goto label_28a058;
        default: break;
    }

    ctx->pc = 0x28a020u;

    // 0x28a020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a028: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a02c: 0xc0a279c  jal         func_289E70
    ctx->pc = 0x28A02Cu;
    SET_GPR_U32(ctx, 31, 0x28A034u);
    ctx->pc = 0x28A030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A02Cu;
    // 0x28a030: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289E70u, 0x28A02Cu, 0x28A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A034u;
label_28a034:
    // 0x28a034: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x28a034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x28a038: 0x2463dde0  addiu       $v1, $v1, -0x2220
    ctx->pc = 0x28a038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958560));
    // 0x28a03c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a040: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x28A040u;
    SET_GPR_U32(ctx, 31, 0x28A048u);
    ctx->pc = 0x28A044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A040u;
    // 0x28a044: 0xae030068  sw          $v1, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x28A040u, 0x28A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A048u;
label_28a048:
    // 0x28a048: 0xc0a17dc  jal         func_285F70
    ctx->pc = 0x28A048u;
    SET_GPR_U32(ctx, 31, 0x28A050u);
    ctx->pc = 0x28A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A048u;
    // 0x28a04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F70u, 0x28A048u, 0x28A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A050u;
label_28a050:
    // 0x28a050: 0xc0a27d4  jal         func_289F50
    ctx->pc = 0x28A050u;
    SET_GPR_U32(ctx, 31, 0x28A058u);
    ctx->pc = 0x28A054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A050u;
    // 0x28a054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289F50u, 0x28A050u, 0x28A058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A058u;
label_28a058:
    // 0x28a058: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28A058u;
    {
        const bool branch_taken_0x28a058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A058u;
        // 0x28a05c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a058) {
            ctx->pc = 0x28A078u;
            return;
        }
    }
    ctx->pc = 0x28A060u;
}
