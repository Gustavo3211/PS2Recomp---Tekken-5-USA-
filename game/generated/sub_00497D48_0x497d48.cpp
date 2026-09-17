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

// Function: sub_00497D48
// Address: 0x497d48 - 0x497de0
void sub_00497D48_0x497d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497D48_0x497d48");
#endif

    switch (ctx->pc) {
        case 0x497d90u: goto label_497d90;
        default: break;
    }

    ctx->pc = 0x497d48u;

    // 0x497d48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x497d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x497d4c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x497d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x497d50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x497d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x497d54: 0x2450d680  addiu       $s0, $v0, -0x2980
    ctx->pc = 0x497d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x497d58: 0x86022212  lh          $v0, 0x2212($s0)
    ctx->pc = 0x497d58u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72F892u));
    // 0x497d5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x497d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x497d60: 0x261122c8  addiu       $s1, $s0, 0x22C8
    ctx->pc = 0x497d60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8904));
    // 0x497d64: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x497D64u;
    {
        const bool branch_taken_0x497d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497D64u;
        // 0x497d68: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497d64) {
            ctx->pc = 0x497DC8u;
            goto label_497dc8;
        }
    }
    ctx->pc = 0x497D6Cu;
    // 0x497d6c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x497d6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x497d70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x497D70u;
    {
        const bool branch_taken_0x497d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497D70u;
        // 0x497d74: 0x96230000  lhu         $v1, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497d70) {
            ctx->pc = 0x497D88u;
            goto label_497d88;
        }
    }
    ctx->pc = 0x497D78u;
    // 0x497d78: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x497d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x497d7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x497D7Cu;
    {
        const bool branch_taken_0x497d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497D7Cu;
        // 0x497d80: 0xa60022c6  sh          $zero, 0x22C6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8902), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497d7c) {
            ctx->pc = 0x497DB0u;
            goto label_497db0;
        }
    }
    ctx->pc = 0x497D84u;
    // 0x497d84: 0x0  nop
    ctx->pc = 0x497d84u;
    // NOP
label_497d88:
    // 0x497d88: 0xc12385a  jal         func_48E168
    ctx->pc = 0x497D88u;
    SET_GPR_U32(ctx, 31, 0x497D90u);
    ctx->pc = 0x48E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E168u, 0x497D88u, 0x497D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497D90u;
label_497d90:
    // 0x497d90: 0x260222c6  addiu       $v0, $s0, 0x22C6
    ctx->pc = 0x497d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8902));
    // 0x497d94: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x497d94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x497d98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x497d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x497d9c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x497d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x497da0: 0x2c84003c  sltiu       $a0, $a0, 0x3C
    ctx->pc = 0x497da0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x497da4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x497DA4u;
    {
        const bool branch_taken_0x497da4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x497DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497DA4u;
        // 0x497da8: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497da4) {
            ctx->pc = 0x497DB4u;
            goto label_497db4;
        }
    }
    ctx->pc = 0x497DACu;
    // 0x497dac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x497dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_497db0:
    // 0x497db0: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x497db0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_497db4:
    // 0x497db4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x497db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x497db8: 0x24630b12  addiu       $v1, $v1, 0xB12
    ctx->pc = 0x497db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2834));
    // 0x497dbc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x497dbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B12u));
    // 0x497dc0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x497dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x497dc4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x497dc4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0B12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0B12u, _value); } while (0);
label_497dc8:
    // 0x497dc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x497dc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497dcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x497dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x497dd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x497dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x497dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x497DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497DD4u;
        // 0x497dd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497DDCu;
    // 0x497ddc: 0x0  nop
    ctx->pc = 0x497ddcu;
    // NOP
    ctx->pc = 0x497de0u;
}
