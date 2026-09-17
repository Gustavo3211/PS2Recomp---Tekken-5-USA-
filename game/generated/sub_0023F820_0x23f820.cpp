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

// Function: sub_0023F820
// Address: 0x23f820 - 0x23f898
void sub_0023F820_0x23f820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F820_0x23f820");
#endif

    switch (ctx->pc) {
        case 0x23f848u: goto label_23f848;
        case 0x23f858u: goto label_23f858;
        default: break;
    }

    ctx->pc = 0x23f820u;

    // 0x23f820: 0x8f82a98c  lw          $v0, -0x5674($gp)
    ctx->pc = 0x23f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
    // 0x23f824: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f828: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F828u;
    {
        const bool branch_taken_0x23f828 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F828u;
        // 0x23f82c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f828) {
            ctx->pc = 0x23F838u;
            goto label_23f838;
        }
    }
    ctx->pc = 0x23F830u;
    // 0x23f830: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23f830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23f834: 0xaf82a98c  sw          $v0, -0x5674($gp)
    ctx->pc = 0x23f834u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945164), GPR_U32(ctx, 2));
label_23f838:
    // 0x23f838: 0x4430015  bgezl       $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23F838u;
    {
        const bool branch_taken_0x23f838 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23f838) {
            ctx->pc = 0x23F83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F838u;
            // 0x23f83c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F890u;
            goto label_23f890;
        }
    }
    ctx->pc = 0x23F840u;
    // 0x23f840: 0xc090306  jal         func_240C18
    ctx->pc = 0x23F840u;
    SET_GPR_U32(ctx, 31, 0x23F848u);
    ctx->pc = 0x240C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240C18u, 0x23F840u, 0x23F848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F848u;
label_23f848:
    // 0x23f848: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23F848u;
    {
        const bool branch_taken_0x23f848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F848u;
        // 0x23f84c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f848) {
            ctx->pc = 0x23F88Cu;
            goto label_23f88c;
        }
    }
    ctx->pc = 0x23F850u;
    // 0x23f850: 0xc047398  jal         func_11CE60
    ctx->pc = 0x23F850u;
    SET_GPR_U32(ctx, 31, 0x23F858u);
    ctx->pc = 0x11CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CE60u, 0x23F850u, 0x23F858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F858u;
label_23f858:
    // 0x23f858: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f85c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x23F85Cu;
    {
        const bool branch_taken_0x23f85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F85Cu;
        // 0x23f860: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f85c) {
            ctx->pc = 0x23F888u;
            goto label_23f888;
        }
    }
    ctx->pc = 0x23F864u;
    // 0x23f864: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x23f864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f868: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F868u;
    {
        const bool branch_taken_0x23f868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F868u;
        // 0x23f86c: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f868) {
            ctx->pc = 0x23F888u;
            goto label_23f888;
        }
    }
    ctx->pc = 0x23F870u;
    // 0x23f870: 0x2785a990  addiu       $a1, $gp, -0x5670
    ctx->pc = 0x23f870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945168));
    // 0x23f874: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x23f874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x23f878: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x23f878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x23f87c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x23f87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23f880: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x23f880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23f884: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x23f884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_23f888:
    // 0x23f888: 0xaf82a98c  sw          $v0, -0x5674($gp)
    ctx->pc = 0x23f888u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945164), GPR_U32(ctx, 2));
label_23f88c:
    // 0x23f88c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23f890:
    // 0x23f890: 0x3e00008  jr          $ra
    ctx->pc = 0x23F890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F890u;
        // 0x23f894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F898u;
}
