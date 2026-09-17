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

// Function: sub_0010E8D8
// Address: 0x10e8d8 - 0x10ea18
void sub_0010E8D8_0x10e8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E8D8_0x10e8d8");
#endif

    switch (ctx->pc) {
        case 0x10e8fcu: goto label_10e8fc;
        case 0x10e918u: goto label_10e918;
        case 0x10e928u: goto label_10e928;
        case 0x10e930u: goto label_10e930;
        case 0x10e948u: goto label_10e948;
        case 0x10e998u: goto label_10e998;
        case 0x10e9a8u: goto label_10e9a8;
        case 0x10e9c0u: goto label_10e9c0;
        case 0x10e9d8u: goto label_10e9d8;
        case 0x10e9e8u: goto label_10e9e8;
        case 0x10ea00u: goto label_10ea00;
        default: break;
    }

    ctx->pc = 0x10e8d8u;

label_10e8d8:
    // 0x10e8d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e8dc: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x10e8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x10e8e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10e8e4: 0x806210d8  lb          $v0, 0x10D8($v1)
    ctx->pc = 0x10e8e4u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x1310D8u));
    // 0x10e8e8: 0x247010d8  addiu       $s0, $v1, 0x10D8
    ctx->pc = 0x10e8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4312));
    // 0x10e8ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E8ECu;
    {
        const bool branch_taken_0x10e8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8ECu;
        // 0x10e8f0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8ec) {
            ctx->pc = 0x10E8FCu;
            goto label_10e8fc;
        }
    }
    ctx->pc = 0x10E8F4u;
    // 0x10e8f4: 0xc043a1a  jal         func_10E868
    ctx->pc = 0x10E8F4u;
    SET_GPR_U32(ctx, 31, 0x10E8FCu);
    ctx->pc = 0x10E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E868u, 0x10E8F4u, 0x10E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E8FCu;
label_10e8fc:
    // 0x10e8fc: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x10e8fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10e900: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10e900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e904: 0x38420054  xori        $v0, $v0, 0x54
    ctx->pc = 0x10e904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)84);
    // 0x10e908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e90c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10e90cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10e910: 0x3e00008  jr          $ra
    ctx->pc = 0x10E910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E910u;
        // 0x10e914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E918u;
label_10e918:
    // 0x10e918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e91c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10e91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10e920: 0xc043d14  jal         func_10F450
    ctx->pc = 0x10E920u;
    SET_GPR_U32(ctx, 31, 0x10E928u);
    ctx->pc = 0x10E924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E920u;
    // 0x10e924: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F450u, 0x10E920u, 0x10E928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E928u;
label_10e928:
    // 0x10e928: 0xc043a36  jal         func_10E8D8
    ctx->pc = 0x10E928u;
    SET_GPR_U32(ctx, 31, 0x10E930u);
    ctx->pc = 0x10E8D8u;
    goto label_10e8d8;
    ctx->pc = 0x10E930u;
label_10e930:
    // 0x10e930: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E930u;
    {
        const bool branch_taken_0x10e930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E930u;
        // 0x10e934: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e930) {
            ctx->pc = 0x10E940u;
            goto label_10e940;
        }
    }
    ctx->pc = 0x10E938u;
    // 0x10e938: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10E938u;
    {
        const bool branch_taken_0x10e938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E938u;
        // 0x10e93c: 0x904210d4  lbu         $v0, 0x10D4($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e938) {
            ctx->pc = 0x10E96Cu;
            goto label_10e96c;
        }
    }
    ctx->pc = 0x10E940u;
label_10e940:
    // 0x10e940: 0xc043d14  jal         func_10F450
    ctx->pc = 0x10E940u;
    SET_GPR_U32(ctx, 31, 0x10E948u);
    ctx->pc = 0x10E944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E940u;
    // 0x10e944: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F450u, 0x10E940u, 0x10E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E948u;
label_10e948:
    // 0x10e948: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10e948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e94c: 0x31342  srl         $v0, $v1, 13
    ctx->pc = 0x10e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 13));
    // 0x10e950: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x10e950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x10e954: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E954u;
    {
        const bool branch_taken_0x10e954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e954) {
            ctx->pc = 0x10E958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E954u;
            // 0x10e958: 0x31402  srl         $v0, $v1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E968u;
            goto label_10e968;
        }
    }
    ctx->pc = 0x10E95Cu;
    // 0x10e95c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x10e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x10e960: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10E960u;
    {
        const bool branch_taken_0x10e960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E960u;
        // 0x10e964: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e960) {
            ctx->pc = 0x10E96Cu;
            goto label_10e96c;
        }
    }
    ctx->pc = 0x10E968u;
label_10e968:
    // 0x10e968: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x10e968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_10e96c:
    // 0x10e96c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10e96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e970: 0x3e00008  jr          $ra
    ctx->pc = 0x10E970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E970u;
        // 0x10e974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E978u;
    // 0x10e978: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x10e978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x10e97c: 0x244710d0  addiu       $a3, $v0, 0x10D0
    ctx->pc = 0x10e97cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
    // 0x10e980: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x10e980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x10e984: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x10e984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x10e988: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x10e988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10e98c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E98Cu;
        // 0x10e990: 0xb4e30000  sdr         $v1, 0x0($a3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E994u;
    // 0x10e994: 0x0  nop
    ctx->pc = 0x10e994u;
    // NOP
label_10e998:
    // 0x10e998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e99c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10e99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10e9a0: 0xc043a36  jal         func_10E8D8
    ctx->pc = 0x10E9A0u;
    SET_GPR_U32(ctx, 31, 0x10E9A8u);
    ctx->pc = 0x10E8D8u;
    goto label_10e8d8;
    ctx->pc = 0x10E9A8u;
label_10e9a8:
    // 0x10e9a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E9A8u;
    {
        const bool branch_taken_0x10e9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9A8u;
        // 0x10e9ac: 0x3c030013  lui         $v1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9a8) {
            ctx->pc = 0x10E9B8u;
            goto label_10e9b8;
        }
    }
    ctx->pc = 0x10E9B0u;
    // 0x10e9b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10E9B0u;
    {
        const bool branch_taken_0x10e9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9B0u;
        // 0x10e9b4: 0x906210d2  lbu         $v0, 0x10D2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4306)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9b0) {
            ctx->pc = 0x10E9CCu;
            goto label_10e9cc;
        }
    }
    ctx->pc = 0x10E9B8u;
label_10e9b8:
    // 0x10e9b8: 0xc043d14  jal         func_10F450
    ctx->pc = 0x10E9B8u;
    SET_GPR_U32(ctx, 31, 0x10E9C0u);
    ctx->pc = 0x10E9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9B8u;
    // 0x10e9bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F450u, 0x10E9B8u, 0x10E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9C0u;
label_10e9c0:
    // 0x10e9c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e9c4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x10e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x10e9c8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x10e9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_10e9cc:
    // 0x10e9cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10e9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x10E9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9D0u;
        // 0x10e9d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E9D8u;
label_10e9d8:
    // 0x10e9d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e9dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10e9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10e9e0: 0xc043a36  jal         func_10E8D8
    ctx->pc = 0x10E9E0u;
    SET_GPR_U32(ctx, 31, 0x10E9E8u);
    ctx->pc = 0x10E8D8u;
    goto label_10e8d8;
    ctx->pc = 0x10E9E8u;
label_10e9e8:
    // 0x10e9e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E9E8u;
    {
        const bool branch_taken_0x10e9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9E8u;
        // 0x10e9ec: 0x3c030013  lui         $v1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9e8) {
            ctx->pc = 0x10E9F8u;
            goto label_10e9f8;
        }
    }
    ctx->pc = 0x10E9F0u;
    // 0x10e9f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10E9F0u;
    {
        const bool branch_taken_0x10e9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9F0u;
        // 0x10e9f4: 0x906210d5  lbu         $v0, 0x10D5($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4309)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9f0) {
            ctx->pc = 0x10EA08u;
            goto label_10ea08;
        }
    }
    ctx->pc = 0x10E9F8u;
label_10e9f8:
    // 0x10e9f8: 0xc043d14  jal         func_10F450
    ctx->pc = 0x10E9F8u;
    SET_GPR_U32(ctx, 31, 0x10EA00u);
    ctx->pc = 0x10E9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9F8u;
    // 0x10e9fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F450u, 0x10E9F8u, 0x10EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA00u;
label_10ea00:
    // 0x10ea00: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ea04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10ea04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_10ea08:
    // 0x10ea08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ea08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ea0c: 0x3e00008  jr          $ra
    ctx->pc = 0x10EA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA0Cu;
        // 0x10ea10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EA14u;
    // 0x10ea14: 0x0  nop
    ctx->pc = 0x10ea14u;
    // NOP
    ctx->pc = 0x10ea18u;
}
