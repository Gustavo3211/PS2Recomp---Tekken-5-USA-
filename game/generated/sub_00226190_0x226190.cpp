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

// Function: sub_00226190
// Address: 0x226190 - 0x226240
void sub_00226190_0x226190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226190_0x226190");
#endif

    switch (ctx->pc) {
        case 0x226204u: goto label_226204;
        case 0x226228u: goto label_226228;
        default: break;
    }

    ctx->pc = 0x226190u;

    // 0x226190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226194: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x226194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226198: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22619c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22619cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2261a0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2261a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2261a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2261a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2261a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2261a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2261ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2261acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2261b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2261b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2261b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2261b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2261b8: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x2261b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2261bc: 0x12030011  beq         $s0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2261BCu;
    {
        const bool branch_taken_0x2261bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2261C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261BCu;
        // 0x2261c0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2261bc) {
            ctx->pc = 0x226204u;
            goto label_226204;
        }
    }
    ctx->pc = 0x2261C4u;
    // 0x2261c4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2261c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2261c8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2261c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2261cc: 0x8c43885c  lw          $v1, -0x77A4($v0)
    ctx->pc = 0x2261ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x2261d0: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2261D0u;
    {
        const bool branch_taken_0x2261d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2261D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261D0u;
        // 0x2261d4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2261d0) {
            ctx->pc = 0x2261F8u;
            goto label_2261f8;
        }
    }
    ctx->pc = 0x2261D8u;
    // 0x2261d8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2261d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2261dc: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x2261dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2261e0: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x2261e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x2261e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2261E4u;
    {
        const bool branch_taken_0x2261e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2261E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261E4u;
        // 0x2261e8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2261e4) {
            ctx->pc = 0x2261F8u;
            goto label_2261f8;
        }
    }
    ctx->pc = 0x2261ECu;
    // 0x2261ec: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2261ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2261f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2261F0u;
    {
        const bool branch_taken_0x2261f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2261F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261F0u;
        // 0x2261f4: 0x24447358  addiu       $a0, $v0, 0x7358 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2261f0) {
            ctx->pc = 0x2261FCu;
            goto label_2261fc;
        }
    }
    ctx->pc = 0x2261F8u;
label_2261f8:
    // 0x2261f8: 0x24447348  addiu       $a0, $v0, 0x7348
    ctx->pc = 0x2261f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29512));
label_2261fc:
    // 0x2261fc: 0xc089784  jal         func_225E10
    ctx->pc = 0x2261FCu;
    SET_GPR_U32(ctx, 31, 0x226204u);
    ctx->pc = 0x225E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E10u, 0x2261FCu, 0x226204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226204u;
label_226204:
    // 0x226204: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x226204u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x226208: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x226208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22620c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x22620cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x226210: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x226210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x226214: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x226214u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x226218: 0x24847378  addiu       $a0, $a0, 0x7378
    ctx->pc = 0x226218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29560));
    // 0x22621c: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x22621cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x226220: 0xc089784  jal         func_225E10
    ctx->pc = 0x226220u;
    SET_GPR_U32(ctx, 31, 0x226228u);
    ctx->pc = 0x226224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226220u;
    // 0x226224: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E10u, 0x226220u, 0x226228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226228u;
label_226228:
    // 0x226228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22622c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22622cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x226230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226234: 0x3e00008  jr          $ra
    ctx->pc = 0x226234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226234u;
        // 0x226238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22623Cu;
    // 0x22623c: 0x0  nop
    ctx->pc = 0x22623cu;
    // NOP
    ctx->pc = 0x226240u;
}
