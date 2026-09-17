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

// Function: sub_0020B990
// Address: 0x20b990 - 0x20ba38
void sub_0020B990_0x20b990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B990_0x20b990");
#endif

    switch (ctx->pc) {
        case 0x20b9dcu: goto label_20b9dc;
        case 0x20ba14u: goto label_20ba14;
        case 0x20ba1cu: goto label_20ba1c;
        case 0x20ba24u: goto label_20ba24;
        default: break;
    }

    ctx->pc = 0x20b990u;

    // 0x20b990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20b990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20b994: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20b994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20b998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20b998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20b99c: 0x244488d0  addiu       $a0, $v0, -0x7730
    ctx->pc = 0x20b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x20b9a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20b9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20b9a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20b9a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b9a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20b9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20b9ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x20b9b0: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x20b9b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x20b9b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20B9B4u;
    {
        const bool branch_taken_0x20b9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9B4u;
        // 0x20b9b8: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9b4) {
            ctx->pc = 0x20B9C0u;
            goto label_20b9c0;
        }
    }
    ctx->pc = 0x20B9BCu;
    // 0x20b9bc: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x20b9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_20b9c0:
    // 0x20b9c0: 0x8f829730  lw          $v0, -0x68D0($gp)
    ctx->pc = 0x20b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x20b9c4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x20b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x20b9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b9cc: 0xac608878  sw          $zero, -0x7788($v1)
    ctx->pc = 0x20b9ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3A8878u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8878u, _value); } while (0);
    // 0x20b9d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20b9d4: 0xc07c6be  jal         func_1F1AF8
    ctx->pc = 0x20B9D4u;
    SET_GPR_U32(ctx, 31, 0x20B9DCu);
    ctx->pc = 0x20B9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B9D4u;
    // 0x20b9d8: 0xaf829730  sw          $v0, -0x68D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1AF8u, 0x20B9D4u, 0x20B9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B9DCu;
label_20b9dc:
    // 0x20b9dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20B9DCu;
    {
        const bool branch_taken_0x20b9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9DCu;
        // 0x20b9e0: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9dc) {
            ctx->pc = 0x20BA00u;
            goto label_20ba00;
        }
    }
    ctx->pc = 0x20B9E4u;
    // 0x20b9e4: 0x9602003c  lhu         $v0, 0x3C($s0)
    ctx->pc = 0x20b9e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x20b9e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b9ec: 0x5c1821  addu        $v1, $v0, $gp
    ctx->pc = 0x20b9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x20b9f0: 0x8c63a850  lw          $v1, -0x57B0($v1)
    ctx->pc = 0x20b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944848)));
    // 0x20b9f4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x20b9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x20b9f8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20B9F8u;
    {
        const bool branch_taken_0x20b9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b9f8) {
            ctx->pc = 0x20BA04u;
            goto label_20ba04;
        }
    }
    ctx->pc = 0x20BA00u;
label_20ba00:
    // 0x20ba00: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x20ba00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ba04:
    // 0x20ba04: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20BA04u;
    {
        const bool branch_taken_0x20ba04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA04u;
        // 0x20ba08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba04) {
            ctx->pc = 0x20BA28u;
            goto label_20ba28;
        }
    }
    ctx->pc = 0x20BA0Cu;
    // 0x20ba0c: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x20BA0Cu;
    SET_GPR_U32(ctx, 31, 0x20BA14u);
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x20BA0Cu, 0x20BA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA14u;
label_20ba14:
    // 0x20ba14: 0xc082162  jal         func_208588
    ctx->pc = 0x20BA14u;
    SET_GPR_U32(ctx, 31, 0x20BA1Cu);
    ctx->pc = 0x20BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA14u;
    // 0x20ba18: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20BA14u, 0x20BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA1Cu;
label_20ba1c:
    // 0x20ba1c: 0xc0926a0  jal         func_249A80
    ctx->pc = 0x20BA1Cu;
    SET_GPR_U32(ctx, 31, 0x20BA24u);
    ctx->pc = 0x249A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249A80u, 0x20BA1Cu, 0x20BA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA24u;
label_20ba24:
    // 0x20ba24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ba24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20ba28:
    // 0x20ba28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20ba28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20ba2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20ba2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ba30: 0x3e00008  jr          $ra
    ctx->pc = 0x20BA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA30u;
        // 0x20ba34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BA38u;
}
