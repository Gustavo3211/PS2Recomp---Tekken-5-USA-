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

// Function: sub_0049BA70
// Address: 0x49ba70 - 0x49baf8
void sub_0049BA70_0x49ba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049BA70_0x49ba70");
#endif

    switch (ctx->pc) {
        case 0x49bac0u: goto label_49bac0;
        case 0x49bae4u: goto label_49bae4;
        case 0x49baecu: goto label_49baec;
        default: break;
    }

    ctx->pc = 0x49ba70u;

    // 0x49ba70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49ba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49ba74: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x49ba74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ba78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ba78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ba7c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x49ba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x49ba80: 0xa44501c2  sh          $a1, 0x1C2($v0)
    ctx->pc = 0x49ba80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 450), (uint16_t)GPR_U32(ctx, 5));
    // 0x49ba84: 0x8443016a  lh          $v1, 0x16A($v0)
    ctx->pc = 0x49ba84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 362)));
    // 0x49ba88: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x49BA88u;
    {
        const bool branch_taken_0x49ba88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA88u;
        // 0x49ba8c: 0x24460148  addiu       $a2, $v0, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ba88) {
            ctx->pc = 0x49BAC8u;
            goto label_49bac8;
        }
    }
    ctx->pc = 0x49BA90u;
    // 0x49ba90: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x49ba90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49ba94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49ba98: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x49ba98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49ba9c: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x49BA9Cu;
    {
        const bool branch_taken_0x49ba9c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x49BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA9Cu;
        // 0x49baa0: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ba9c) {
            ctx->pc = 0x49BAB0u;
            goto label_49bab0;
        }
    }
    ctx->pc = 0x49BAA4u;
    // 0x49baa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49baa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49baa8: 0x8126d66  j           func_49B598
    ctx->pc = 0x49BAA8u;
    ctx->pc = 0x49BAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BAA8u;
    // 0x49baac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    sub_0049B598_0x49b598(rdram, ctx, runtime); return;
    ctx->pc = 0x49BAB0u;
label_49bab0:
    // 0x49bab0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49bab4: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x49bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x49bab8: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x49BAB8u;
    SET_GPR_U32(ctx, 31, 0x49BAC0u);
    ctx->pc = 0x49BABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BAB8u;
    // 0x49babc: 0xa462fa44  sh          $v0, -0x5BC($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965828), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x49BAB8u, 0x49BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BAC0u;
label_49bac0:
    // 0x49bac0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x49BAC0u;
    {
        const bool branch_taken_0x49bac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BAC0u;
        // 0x49bac4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bac0) {
            ctx->pc = 0x49BAF0u;
            goto label_49baf0;
        }
    }
    ctx->pc = 0x49BAC8u;
label_49bac8:
    // 0x49bac8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x49bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x49bacc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x49baccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x49bad0: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x49bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x49bad4: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x49bad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x49bad8: 0xa44323c4  sh          $v1, 0x23C4($v0)
    ctx->pc = 0x49bad8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x49badc: 0xc126d7e  jal         func_49B5F8
    ctx->pc = 0x49BADCu;
    SET_GPR_U32(ctx, 31, 0x49BAE4u);
    ctx->pc = 0x49BAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BADCu;
    // 0x49bae0: 0xa445232c  sh          $a1, 0x232C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9004), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B5F8u, 0x49BADCu, 0x49BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BAE4u;
label_49bae4:
    // 0x49bae4: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x49BAE4u;
    SET_GPR_U32(ctx, 31, 0x49BAECu);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x49BAE4u, 0x49BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BAECu;
label_49baec:
    // 0x49baec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49baecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49baf0:
    // 0x49baf0: 0x3e00008  jr          $ra
    ctx->pc = 0x49BAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BAF0u;
        // 0x49baf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49BAF8u;
}
