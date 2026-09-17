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

// Function: sub_0049FED8
// Address: 0x49fed8 - 0x4a0008
void sub_0049FED8_0x49fed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FED8_0x49fed8");
#endif

    switch (ctx->pc) {
        case 0x49ff08u: goto label_49ff08;
        case 0x49ff50u: goto label_49ff50;
        case 0x49ffe8u: goto label_49ffe8;
        default: break;
    }

    ctx->pc = 0x49fed8u;

    // 0x49fed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49fed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49fedc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49fee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49fee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49fee4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x49fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x49fee8: 0xa462d716  sh          $v0, -0x28EA($v1)
    ctx->pc = 0x49fee8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72D716u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D716u, _value); } while (0);
    // 0x49feec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49feecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49fef0: 0x8122cc6  j           func_48B318
    ctx->pc = 0x49FEF0u;
    ctx->pc = 0x49FEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FEF0u;
    // 0x49fef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B318u;
    sub_0048B318_0x48b318(rdram, ctx, runtime); return;
    ctx->pc = 0x49FEF8u;
    // 0x49fef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49fef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49fefc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49fefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ff00: 0xc124c68  jal         func_4931A0
    ctx->pc = 0x49FF00u;
    SET_GPR_U32(ctx, 31, 0x49FF08u);
    ctx->pc = 0x4931A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4931A0u, 0x49FF00u, 0x49FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FF08u;
label_49ff08:
    // 0x49ff08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ff08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ff0c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x49ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x49ff10: 0x812413e  j           func_4904F8
    ctx->pc = 0x49FF10u;
    ctx->pc = 0x49FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FF10u;
    // 0x49ff14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    sub_004904F8_0x4904f8(rdram, ctx, runtime); return;
    ctx->pc = 0x49FF18u;
    // 0x49ff18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49ff18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49ff1c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49ff20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ff20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ff24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49ff28: 0xa462f8e8  sh          $v0, -0x718($v1)
    ctx->pc = 0x49ff28u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F8E8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F8E8u, _value); } while (0);
    // 0x49ff2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ff2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ff30: 0x8124098  j           func_490260
    ctx->pc = 0x49FF30u;
    ctx->pc = 0x49FF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FF30u;
    // 0x49ff34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x490260u;
    sub_00490260_0x490260(rdram, ctx, runtime); return;
    ctx->pc = 0x49FF38u;
    // 0x49ff38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49ff38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49ff3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x49ff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49ff40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ff40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ff44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ff44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ff48: 0x812a604  j           func_4A9810
    ctx->pc = 0x49FF48u;
    ctx->pc = 0x49FF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FF48u;
    // 0x49ff4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9810u;
    sub_004A9810_0x4a9810(rdram, ctx, runtime); return;
    ctx->pc = 0x49FF50u;
label_49ff50:
    // 0x49ff50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49ff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49ff54: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x49ff54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x49ff58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49ff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49ff5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49ff5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49ff60: 0x2482d680  addiu       $v0, $a0, -0x2980
    ctx->pc = 0x49ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x49ff64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49ff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49ff68: 0x84420096  lh          $v0, 0x96($v0)
    ctx->pc = 0x49ff68u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D716u));
    // 0x49ff6c: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x49ff6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x49ff70: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x49FF70u;
    {
        const bool branch_taken_0x49ff70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FF70u;
        // 0x49ff74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ff70) {
            ctx->pc = 0x49FFC8u;
            goto label_49ffc8;
        }
    }
    ctx->pc = 0x49FF78u;
    // 0x49ff78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49ff7c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49ff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49ff80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49ff84: 0x8c63b190  lw          $v1, -0x4E70($v1)
    ctx->pc = 0x49ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947216)));
    // 0x49ff88: 0x600008  jr          $v1
    ctx->pc = 0x49FF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x49FF90u: goto label_49ff90;
            case 0x49FFA0u: goto label_49ffa0;
            case 0x49FFB0u: goto label_49ffb0;
            case 0x49FFC0u: goto label_49ffc0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49FF88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x49FF90u;
label_49ff90:
    // 0x49ff90: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x49ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x49ff94: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x49FF94u;
    {
        const bool branch_taken_0x49ff94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FF94u;
        // 0x49ff98: 0x24508300  addiu       $s0, $v0, -0x7D00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ff94) {
            ctx->pc = 0x49FFC8u;
            goto label_49ffc8;
        }
    }
    ctx->pc = 0x49FF9Cu;
    // 0x49ff9c: 0x0  nop
    ctx->pc = 0x49ff9cu;
    // NOP
label_49ffa0:
    // 0x49ffa0: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x49ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x49ffa4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x49FFA4u;
    {
        const bool branch_taken_0x49ffa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FFA4u;
        // 0x49ffa8: 0x24508380  addiu       $s0, $v0, -0x7C80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ffa4) {
            ctx->pc = 0x49FFC8u;
            goto label_49ffc8;
        }
    }
    ctx->pc = 0x49FFACu;
    // 0x49ffac: 0x0  nop
    ctx->pc = 0x49ffacu;
    // NOP
label_49ffb0:
    // 0x49ffb0: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x49ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x49ffb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49FFB4u;
    {
        const bool branch_taken_0x49ffb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FFB4u;
        // 0x49ffb8: 0x24508400  addiu       $s0, $v0, -0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ffb4) {
            ctx->pc = 0x49FFC8u;
            goto label_49ffc8;
        }
    }
    ctx->pc = 0x49FFBCu;
    // 0x49ffbc: 0x0  nop
    ctx->pc = 0x49ffbcu;
    // NOP
label_49ffc0:
    // 0x49ffc0: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x49ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x49ffc4: 0x24508480  addiu       $s0, $v0, -0x7B80
    ctx->pc = 0x49ffc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
label_49ffc8:
    // 0x49ffc8: 0x2483d680  addiu       $v1, $a0, -0x2980
    ctx->pc = 0x49ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x49ffcc: 0x84620096  lh          $v0, 0x96($v1)
    ctx->pc = 0x49ffccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x49ffd0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x49ffd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x49ffd4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x49FFD4u;
    {
        const bool branch_taken_0x49ffd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FFD4u;
        // 0x49ffd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ffd4) {
            ctx->pc = 0x49FFE0u;
            goto label_49ffe0;
        }
    }
    ctx->pc = 0x49FFDCu;
    // 0x49ffdc: 0x84712290  lh          $s1, 0x2290($v1)
    ctx->pc = 0x49ffdcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8848)));
label_49ffe0:
    // 0x49ffe0: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x49FFE0u;
    SET_GPR_U32(ctx, 31, 0x49FFE8u);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x49FFE0u, 0x49FFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FFE8u;
label_49ffe8:
    // 0x49ffe8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x49ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x49ffec: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x49ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x49fff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49fff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49fff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49fff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49fff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49fff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49fffc: 0xac43006c  sw          $v1, 0x6C($v0)
    ctx->pc = 0x49fffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
    // 0x4a0000: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0000u;
        // 0x4a0004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0008u;
}
