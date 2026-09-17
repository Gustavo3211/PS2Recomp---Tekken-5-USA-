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

// Function: sub_003548C8
// Address: 0x3548c8 - 0x354a20
void sub_003548C8_0x3548c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003548C8_0x3548c8");
#endif

    switch (ctx->pc) {
        case 0x3548e0u: goto label_3548e0;
        default: break;
    }

    ctx->pc = 0x3548c8u;

    // 0x3548c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3548c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3548cc: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3548ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x3548d0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3548d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3548d4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3548d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3548d8: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3548d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3548dc: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x3548dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_3548e0:
    // 0x3548e0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3548e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3548e4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3548E4u;
    {
        const bool branch_taken_0x3548e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3548e4) {
            ctx->pc = 0x3548F4u;
            goto label_3548f4;
        }
    }
    ctx->pc = 0x3548ECu;
    // 0x3548ec: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x3548ECu;
    {
        const bool branch_taken_0x3548ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3548ec) {
            ctx->pc = 0x354A08u;
            goto label_354a08;
        }
    }
    ctx->pc = 0x3548F4u;
label_3548f4:
    // 0x3548f4: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3548f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3548f8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3548f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3548fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3548fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x354900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x354900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354904: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x354904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x354908: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x354908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x35490c: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x35490cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x354910: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x354910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x354914: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x354914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354918: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x354918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35491c: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x35491Cu;
    {
        const bool branch_taken_0x35491c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35491c) {
            ctx->pc = 0x3549F4u;
            goto label_3549f4;
        }
    }
    ctx->pc = 0x354924u;
    // 0x354924: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x354924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x354928: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x354928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35492c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x35492cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x354930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x354930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354934: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x354934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x354938: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x354938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x35493c: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x35493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x354940: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x354940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x354944: 0x8f82cbf8  lw          $v0, -0x3408($gp)
    ctx->pc = 0x354944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953976)));
    // 0x354948: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x354948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35494c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x35494cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x354950: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x354950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354954: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x354954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x354958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x354958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35495c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x35495cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x354960: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x354960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x354964: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x354964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x354968: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x354968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35496c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354970: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x354970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x354974: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x354974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x354978: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x354978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35497c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x35497cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x354980: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x354980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354984: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x354984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x354988: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x354988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x35498c: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x35498cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x354990: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x354990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x354994: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x354994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354998: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x354998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x35499c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x35499cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3549a0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x3549a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3549a4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x3549a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3549a8: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x3549a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3549ac: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x3549acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3549b0: 0x8f83cbf8  lw          $v1, -0x3408($gp)
    ctx->pc = 0x3549b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953976)));
    // 0x3549b4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3549b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3549b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3549b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3549bc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3549BCu;
    {
        const bool branch_taken_0x3549bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3549bc) {
            ctx->pc = 0x3549CCu;
            goto label_3549cc;
        }
    }
    ctx->pc = 0x3549C4u;
    // 0x3549c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3549c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3549c8: 0xaf82cbf8  sw          $v0, -0x3408($gp)
    ctx->pc = 0x3549c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953976), GPR_U32(ctx, 2));
label_3549cc:
    // 0x3549cc: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3549ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3549d0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3549d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3549d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3549d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3549d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3549d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3549dc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3549dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3549e0: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3549e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x3549e4: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x3549e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x3549e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3549e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3549ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3549ECu;
    {
        const bool branch_taken_0x3549ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3549ec) {
            ctx->pc = 0x354A0Cu;
            goto label_354a0c;
        }
    }
    ctx->pc = 0x3549F4u;
label_3549f4:
    // 0x3549f4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3549f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3549f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3549f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3549fc: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3549fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x354a00: 0x1000ffb7  b           . + 4 + (-0x49 << 2)
    ctx->pc = 0x354A00u;
    {
        const bool branch_taken_0x354a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354a00) {
            ctx->pc = 0x3548E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3548e0;
        }
    }
    ctx->pc = 0x354A08u;
label_354a08:
    // 0x354a08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354a0c:
    // 0x354a0c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x354a0cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354a10: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x354a10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354a14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x354a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x354a18: 0x3e00008  jr          $ra
    ctx->pc = 0x354A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354A20u;
}
