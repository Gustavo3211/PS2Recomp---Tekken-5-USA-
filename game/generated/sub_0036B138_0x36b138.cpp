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

// Function: sub_0036B138
// Address: 0x36b138 - 0x36b1b0
void sub_0036B138_0x36b138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B138_0x36b138");
#endif

    switch (ctx->pc) {
        case 0x36b16cu: goto label_36b16c;
        default: break;
    }

    ctx->pc = 0x36b138u;

    // 0x36b138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36b138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36b13c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36b140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36b140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36b144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36b144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b148: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x36b148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x36b14c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36b14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36b150: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36b150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36b154: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x36b154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x36b158: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36b158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36b15c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36b15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b160: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36b160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b164: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x36B164u;
    SET_GPR_U32(ctx, 31, 0x36B16Cu);
    ctx->pc = 0x36B168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B164u;
    // 0x36b168: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x36B164u, 0x36B16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B16Cu;
label_36b16c:
    // 0x36b16c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b170: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36b170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36b174: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36b174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36b178: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36B178u;
    {
        const bool branch_taken_0x36b178 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B178u;
        // 0x36b17c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b178) {
            ctx->pc = 0x36B198u;
            goto label_36b198;
        }
    }
    ctx->pc = 0x36B180u;
    // 0x36b180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b184: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36b184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36b188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b18c: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36B18Cu;
    ctx->pc = 0x36B190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B18Cu;
    // 0x36b190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36B194u;
    // 0x36b194: 0x0  nop
    ctx->pc = 0x36b194u;
    // NOP
label_36b198:
    // 0x36b198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b19c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36b19cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b1a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36b1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x36B1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B1A4u;
        // 0x36b1a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B1ACu;
    // 0x36b1ac: 0x0  nop
    ctx->pc = 0x36b1acu;
    // NOP
    ctx->pc = 0x36b1b0u;
}
