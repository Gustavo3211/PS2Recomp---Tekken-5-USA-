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

// Function: sub_00493048
// Address: 0x493048 - 0x4930f0
void sub_00493048_0x493048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493048_0x493048");
#endif

    switch (ctx->pc) {
        case 0x493058u: goto label_493058;
        default: break;
    }

    ctx->pc = 0x493048u;

    // 0x493048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x493048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49304c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49304cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x493050: 0xc12462c  jal         func_4918B0
    ctx->pc = 0x493050u;
    SET_GPR_U32(ctx, 31, 0x493058u);
    ctx->pc = 0x4918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4918B0u, 0x493050u, 0x493058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493058u;
label_493058:
    // 0x493058: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x493058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49305c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x49305cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x493060: 0x2447d680  addiu       $a3, $v0, -0x2980
    ctx->pc = 0x493060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x493064: 0xa4e0002c  sh          $zero, 0x2C($a3)
    ctx->pc = 0x493064u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D6ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D6ACu, _value); } while (0);
    // 0x493068: 0xa4e0002e  sh          $zero, 0x2E($a3)
    ctx->pc = 0x493068u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D6AEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D6AEu, _value); } while (0);
    // 0x49306c: 0xa4e00022  sh          $zero, 0x22($a3)
    ctx->pc = 0x49306cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D6A2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D6A2u, _value); } while (0);
    // 0x493070: 0xa4e00020  sh          $zero, 0x20($a3)
    ctx->pc = 0x493070u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D6A0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D6A0u, _value); } while (0);
    // 0x493074: 0x95020084  lhu         $v0, 0x84($t0)
    ctx->pc = 0x493074u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 132)));
    // 0x493078: 0xa4e2002a  sh          $v0, 0x2A($a3)
    ctx->pc = 0x493078u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72D6AAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D6AAu, _value); } while (0);
    // 0x49307c: 0x85030090  lh          $v1, 0x90($t0)
    ctx->pc = 0x49307cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 144)));
    // 0x493080: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x493080u;
    {
        const bool branch_taken_0x493080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x493080) {
            ctx->pc = 0x493084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x493080u;
            // 0x493084: 0xa4e00026  sh          $zero, 0x26($a3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 7), 38), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4930E0u;
            goto label_4930e0;
        }
    }
    ctx->pc = 0x493088u;
    // 0x493088: 0x95050080  lhu         $a1, 0x80($t0)
    ctx->pc = 0x493088u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x49308c: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x49308cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x493090: 0xa4e50024  sh          $a1, 0x24($a3)
    ctx->pc = 0x493090u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 36), (uint16_t)GPR_U32(ctx, 5));
    // 0x493094: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x493094u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x493098: 0x33403  sra         $a2, $v1, 16
    ctx->pc = 0x493098u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 16));
    // 0x49309c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x49309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x4930a0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x4930a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4930a4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4930a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4930a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4930a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4930ac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4930acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4930b0: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x4930b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4930b4: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x4930b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4930b8: 0x85020082  lh          $v0, 0x82($t0)
    ctx->pc = 0x4930b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 130)));
    // 0x4930bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4930BCu;
    {
        const bool branch_taken_0x4930bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4930C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4930BCu;
        // 0x4930c0: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4930bc) {
            ctx->pc = 0x4930D4u;
            goto label_4930d4;
        }
    }
    ctx->pc = 0x4930C4u;
    // 0x4930c4: 0x43403  sra         $a2, $a0, 16
    ctx->pc = 0x4930c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4930c8: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x4930c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4930cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4930ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4930d0: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x4930d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_4930d4:
    // 0x4930d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4930D4u;
    {
        const bool branch_taken_0x4930d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4930D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4930D4u;
        // 0x4930d8: 0xa4e60026  sh          $a2, 0x26($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 38), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4930d4) {
            ctx->pc = 0x4930E4u;
            goto label_4930e4;
        }
    }
    ctx->pc = 0x4930DCu;
    // 0x4930dc: 0x0  nop
    ctx->pc = 0x4930dcu;
    // NOP
label_4930e0:
    // 0x4930e0: 0xa4e00024  sh          $zero, 0x24($a3)
    ctx->pc = 0x4930e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 36), (uint16_t)GPR_U32(ctx, 0));
label_4930e4:
    // 0x4930e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4930e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4930e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4930E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4930ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4930E8u;
        // 0x4930ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4930E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4930F0u;
}
