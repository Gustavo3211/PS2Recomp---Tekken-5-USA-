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

// Function: sub_00296538
// Address: 0x296538 - 0x2965b8
void sub_00296538_0x296538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296538_0x296538");
#endif

    switch (ctx->pc) {
        case 0x2965a8u: goto label_2965a8;
        default: break;
    }

    ctx->pc = 0x296538u;

    // 0x296538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29653c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x29653cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x296540: 0x14a20019  bne         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x296540u;
    {
        const bool branch_taken_0x296540 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x296544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296540u;
        // 0x296544: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296540) {
            ctx->pc = 0x2965A8u;
            goto label_2965a8;
        }
    }
    ctx->pc = 0x296548u;
    // 0x296548: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x296548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29654c: 0x54850017  bnel        $a0, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x29654Cu;
    {
        const bool branch_taken_0x29654c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x29654c) {
            ctx->pc = 0x296550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29654Cu;
            // 0x296550: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2965ACu;
            goto label_2965ac;
        }
    }
    ctx->pc = 0x296554u;
    // 0x296554: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x296554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x296558: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x296558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29655c: 0x2442bed8  addiu       $v0, $v0, -0x4128
    ctx->pc = 0x29655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950616));
    // 0x296560: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x296560u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3BBEECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BBEECu, _value); } while (0);
    // 0x296564: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x296564u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3BBF0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BBF0Cu, _value); } while (0);
    // 0x296568: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x296568u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3BBEDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BBEDCu, _value); } while (0);
    // 0x29656c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29656cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3BBED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BBED8u, _value); } while (0);
    // 0x296570: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x296570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3BBEE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BBEE0u, _value); } while (0);
    // 0x296574: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x296574u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3BBEE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BBEE8u, _value); } while (0);
    // 0x296578: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x296578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3BBEE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BBEE4u, _value); } while (0);
    // 0x29657c: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x29657cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3BBEF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BBEF0u, _value); } while (0);
    // 0x296580: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x296580u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3BBF00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BBF00u, _value); } while (0);
    // 0x296584: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x296584u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3BBEFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BBEFCu, _value); } while (0);
    // 0x296588: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x296588u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3BBEF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BBEF8u, _value); } while (0);
    // 0x29658c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x29658cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3BBEF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BBEF4u, _value); } while (0);
    // 0x296590: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x296590u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3BBF08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BBF08u, _value); } while (0);
    // 0x296594: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296594u;
    {
        const bool branch_taken_0x296594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x296598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296594u;
        // 0x296598: 0xac44002c  sw          $a0, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296594) {
            ctx->pc = 0x2965A8u;
            goto label_2965a8;
        }
    }
    ctx->pc = 0x29659Cu;
    // 0x29659c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29659cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2965a0: 0xc0a58ea  jal         func_2963A8
    ctx->pc = 0x2965A0u;
    SET_GPR_U32(ctx, 31, 0x2965A8u);
    ctx->pc = 0x2965A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2965A0u;
    // 0x2965a4: 0x2484bf10  addiu       $a0, $a0, -0x40F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2963A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2963A8u, 0x2965A0u, 0x2965A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2965A8u;
label_2965a8:
    // 0x2965a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2965a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2965ac:
    // 0x2965ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2965ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2965B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2965ACu;
        // 0x2965b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2965ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2965B4u;
    // 0x2965b4: 0x0  nop
    ctx->pc = 0x2965b4u;
    // NOP
    ctx->pc = 0x2965b8u;
}
