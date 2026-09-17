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

// Function: sub_004ADAF0
// Address: 0x4adaf0 - 0x4adba8
void sub_004ADAF0_0x4adaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ADAF0_0x4adaf0");
#endif

    switch (ctx->pc) {
        case 0x4adb04u: goto label_4adb04;
        default: break;
    }

    ctx->pc = 0x4adaf0u;

    // 0x4adaf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4adaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4adaf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4adaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4adaf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4adaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4adafc: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4ADAFCu;
    SET_GPR_U32(ctx, 31, 0x4ADB04u);
    ctx->pc = 0x4ADB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADAFCu;
    // 0x4adb00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4ADAFCu, 0x4ADB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADB04u;
label_4adb04:
    // 0x4adb04: 0x84450052  lh          $a1, 0x52($v0)
    ctx->pc = 0x4adb04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x4adb08: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x4adb08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4adb0c: 0x86030130  lh          $v1, 0x130($s0)
    ctx->pc = 0x4adb0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x4adb10: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4adb10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4adb14: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4adb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4adb18: 0x26080014  addiu       $t0, $s0, 0x14
    ctx->pc = 0x4adb18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4adb1c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4adb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4adb20: 0x26090018  addiu       $t1, $s0, 0x18
    ctx->pc = 0x4adb20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4adb24: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4adb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4adb28: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4adb28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4adb2c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4adb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4adb30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4adb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4adb34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4adb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4adb38: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4adb38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4adb3c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4adb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4adb40: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x4adb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x4adb44: 0x86050132  lh          $a1, 0x132($s0)
    ctx->pc = 0x4adb44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 306)));
    // 0x4adb48: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4adb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4adb4c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4adb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4adb50: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4adb50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4adb54: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4adb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4adb58: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4adb58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4adb5c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x4adb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4adb60: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4adb60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4adb64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4adb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4adb68: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4adb68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4adb6c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4adb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4adb70: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x4adb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x4adb74: 0x86020134  lh          $v0, 0x134($s0)
    ctx->pc = 0x4adb74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x4adb78: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4adb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4adb7c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4adb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4adb80: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4adb80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4adb84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4adb84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4adb88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4adb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4adb8c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4adb8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4adb90: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4adb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4adb94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4adb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4adb98: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4adb98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4adb9c: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4adb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4adba0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADBA0u;
        // 0x4adba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADBA8u;
}
