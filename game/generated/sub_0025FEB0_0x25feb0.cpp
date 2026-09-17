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

// Function: sub_0025FEB0
// Address: 0x25feb0 - 0x25ff70
void sub_0025FEB0_0x25feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FEB0_0x25feb0");
#endif

    switch (ctx->pc) {
        case 0x25fef0u: goto label_25fef0;
        case 0x25ff1cu: goto label_25ff1c;
        default: break;
    }

    ctx->pc = 0x25feb0u;

    // 0x25feb0: 0x106001a  div         $zero, $t0, $a2
    ctx->pc = 0x25feb0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25feb4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25feb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25feb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25feb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25febc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25febcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25fec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25fec4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25fec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fec8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25fec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25fecc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x25feccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fed0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25fed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x25fed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25fed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25fed8: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x25fed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x25fedc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x25fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x25fee0: 0x9812  mflo        $s3
    ctx->pc = 0x25fee0u;
    SET_GPR_U64(ctx, 19, ctx->lo);
    // 0x25fee4: 0x18c00011  blez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x25FEE4u;
    {
        const bool branch_taken_0x25fee4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x25FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEE4u;
        // 0x25fee8: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fee4) {
            ctx->pc = 0x25FF2Cu;
            goto label_25ff2c;
        }
    }
    ctx->pc = 0x25FEECu;
    // 0x25feec: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x25feecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_25fef0:
    // 0x25fef0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x25fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25fef4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x25fef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x25fef8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25fef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fefc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25ff00: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25ff00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ff04: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x25ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x25ff08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25ff08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25ff0c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25ff10: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x25ff10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x25ff14: 0xc097f3e  jal         func_25FCF8
    ctx->pc = 0x25FF14u;
    SET_GPR_U32(ctx, 31, 0x25FF1Cu);
    ctx->pc = 0x25FF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FF14u;
    // 0x25ff18: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCF8u, 0x25FF14u, 0x25FF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FF1Cu;
label_25ff1c:
    // 0x25ff1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25ff20: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x25ff20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25ff24: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x25FF24u;
    {
        const bool branch_taken_0x25ff24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF24u;
        // 0x25ff28: 0x102040  sll         $a0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff24) {
            ctx->pc = 0x25FEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fef0;
        }
    }
    ctx->pc = 0x25FF2Cu;
label_25ff2c:
    // 0x25ff2c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x25ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x25ff30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25ff30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ff34: 0x244232b0  addiu       $v0, $v0, 0x32B0
    ctx->pc = 0x25ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12976));
    // 0x25ff38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25ff38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ff3c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x25ff3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x25ff40: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x25ff40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x25ff44: 0xb223001f  sdl         $v1, 0x1F($s1)
    ctx->pc = 0x25ff44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25ff48: 0xb6230018  sdr         $v1, 0x18($s1)
    ctx->pc = 0x25ff48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25ff4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x25ff4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25ff50: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x25ff50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x25ff54: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x25ff54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x25ff58: 0xb2230027  sdl         $v1, 0x27($s1)
    ctx->pc = 0x25ff58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25ff5c: 0xb6230020  sdr         $v1, 0x20($s1)
    ctx->pc = 0x25ff5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25ff60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25ff60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ff64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25ff64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25ff68: 0x3e00008  jr          $ra
    ctx->pc = 0x25FF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF68u;
        // 0x25ff6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FF70u;
}
