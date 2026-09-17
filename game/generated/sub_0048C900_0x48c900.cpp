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

// Function: sub_0048C900
// Address: 0x48c900 - 0x48ca40
void sub_0048C900_0x48c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C900_0x48c900");
#endif

    switch (ctx->pc) {
        case 0x48c910u: goto label_48c910;
        case 0x48c960u: goto label_48c960;
        case 0x48c978u: goto label_48c978;
        case 0x48c990u: goto label_48c990;
        case 0x48c998u: goto label_48c998;
        case 0x48c9e8u: goto label_48c9e8;
        case 0x48ca34u: goto label_48ca34;
        default: break;
    }

    ctx->pc = 0x48c900u;

    // 0x48c900: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48c900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48c904: 0x3e00008  jr          $ra
    ctx->pc = 0x48C904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C904u;
        // 0x48c908: 0xa440f940  sh          $zero, -0x6C0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294965568), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C90Cu;
    // 0x48c90c: 0x0  nop
    ctx->pc = 0x48c90cu;
    // NOP
label_48c910:
    // 0x48c910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48c910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48c914: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48c914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48c918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48c918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48c91c: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x48c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48c920: 0x244422c2  addiu       $a0, $v0, 0x22C2
    ctx->pc = 0x48c920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8898));
    // 0x48c924: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x48c924u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72F942u));
    // 0x48c928: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x48c928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48c92c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x48c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48c930: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48C930u;
    {
        const bool branch_taken_0x48c930 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x48C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C930u;
        // 0x48c934: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c930) {
            ctx->pc = 0x48C940u;
            goto label_48c940;
        }
    }
    ctx->pc = 0x48C938u;
    // 0x48c938: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x48c938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x48c93c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x48c93cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_48c940:
    // 0x48c940: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x48c940u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48c944: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x48c944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x48c948: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48C948u;
    {
        const bool branch_taken_0x48c948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C948u;
        // 0x48c94c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c948) {
            ctx->pc = 0x48C958u;
            goto label_48c958;
        }
    }
    ctx->pc = 0x48C950u;
    // 0x48c950: 0x8123872  j           func_48E1C8
    ctx->pc = 0x48C950u;
    ctx->pc = 0x48C954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C950u;
    // 0x48c954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E1C8u;
    sub_0048E1C8_0x48e1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x48C958u;
label_48c958:
    // 0x48c958: 0x3e00008  jr          $ra
    ctx->pc = 0x48C958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C958u;
        // 0x48c95c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C960u;
label_48c960:
    // 0x48c960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48c964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48c964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48c968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48c968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c96c: 0x812386a  j           func_48E1A8
    ctx->pc = 0x48C96Cu;
    ctx->pc = 0x48C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C96Cu;
    // 0x48c970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E1A8u, 0x48C96Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48C974u;
    // 0x48c974: 0x0  nop
    ctx->pc = 0x48c974u;
    // NOP
label_48c978:
    // 0x48c978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48c978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48c97c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48c97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48c980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48c980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c984: 0x8123872  j           func_48E1C8
    ctx->pc = 0x48C984u;
    ctx->pc = 0x48C988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C984u;
    // 0x48c988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E1C8u;
    sub_0048E1C8_0x48e1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x48C98Cu;
    // 0x48c98c: 0x0  nop
    ctx->pc = 0x48c98cu;
    // NOP
label_48c990:
    // 0x48c990: 0x3e00008  jr          $ra
    ctx->pc = 0x48C990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C998u;
label_48c998:
    // 0x48c998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48c998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48c99c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48c9a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48c9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48c9a4: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x48c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48c9a8: 0x244422c2  addiu       $a0, $v0, 0x22C2
    ctx->pc = 0x48c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8898));
    // 0x48c9ac: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x48c9acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72F942u));
    // 0x48c9b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x48c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48c9b4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x48c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48c9b8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48C9B8u;
    {
        const bool branch_taken_0x48c9b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x48C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C9B8u;
        // 0x48c9bc: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c9b8) {
            ctx->pc = 0x48C9C8u;
            goto label_48c9c8;
        }
    }
    ctx->pc = 0x48C9C0u;
    // 0x48c9c0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x48c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x48c9c4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x48c9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_48c9c8:
    // 0x48c9c8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x48c9c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48c9cc: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x48c9ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x48c9d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48C9D0u;
    {
        const bool branch_taken_0x48c9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C9D0u;
        // 0x48c9d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c9d0) {
            ctx->pc = 0x48C9E0u;
            goto label_48c9e0;
        }
    }
    ctx->pc = 0x48C9D8u;
    // 0x48c9d8: 0x8123872  j           func_48E1C8
    ctx->pc = 0x48C9D8u;
    ctx->pc = 0x48C9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C9D8u;
    // 0x48c9dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E1C8u;
    sub_0048E1C8_0x48e1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x48C9E0u;
label_48c9e0:
    // 0x48c9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x48C9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C9E0u;
        // 0x48c9e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C9E8u;
label_48c9e8:
    // 0x48c9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48c9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48c9ec: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48c9f0: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x48c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48c9f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48c9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48c9f8: 0x244322c2  addiu       $v1, $v0, 0x22C2
    ctx->pc = 0x48c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8898));
    // 0x48c9fc: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x48c9fcu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72F942u));
    // 0x48ca00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x48ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x48ca04: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48ca08: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48ca08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48ca0c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48CA0Cu;
    {
        const bool branch_taken_0x48ca0c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x48ca0c) {
            ctx->pc = 0x48CA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48CA0Cu;
            // 0x48ca10: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48CA20u;
            goto label_48ca20;
        }
    }
    ctx->pc = 0x48CA14u;
    // 0x48ca14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ca14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ca18: 0x812323c  j           func_48C8F0
    ctx->pc = 0x48CA18u;
    ctx->pc = 0x48CA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48CA18u;
    // 0x48ca1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C8F0u;
    sub_0048C8F0_0x48c8f0(rdram, ctx, runtime); return;
    ctx->pc = 0x48CA20u;
label_48ca20:
    // 0x48ca20: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x48ca20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x48ca24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48CA24u;
    {
        const bool branch_taken_0x48ca24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CA24u;
        // 0x48ca28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ca24) {
            ctx->pc = 0x48CA38u;
            goto label_48ca38;
        }
    }
    ctx->pc = 0x48CA2Cu;
    // 0x48ca2c: 0xc123872  jal         func_48E1C8
    ctx->pc = 0x48CA2Cu;
    SET_GPR_U32(ctx, 31, 0x48CA34u);
    ctx->pc = 0x48E1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E1C8u, 0x48CA2Cu, 0x48CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CA34u;
label_48ca34:
    // 0x48ca34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ca34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48ca38:
    // 0x48ca38: 0x3e00008  jr          $ra
    ctx->pc = 0x48CA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CA38u;
        // 0x48ca3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CA40u;
}
