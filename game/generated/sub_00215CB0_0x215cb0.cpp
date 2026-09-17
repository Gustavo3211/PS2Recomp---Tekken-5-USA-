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

// Function: sub_00215CB0
// Address: 0x215cb0 - 0x215d80
void sub_00215CB0_0x215cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215CB0_0x215cb0");
#endif

    switch (ctx->pc) {
        case 0x215cf0u: goto label_215cf0;
        case 0x215d1cu: goto label_215d1c;
        case 0x215d2cu: goto label_215d2c;
        default: break;
    }

    ctx->pc = 0x215cb0u;

    // 0x215cb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x215cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x215cb4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x215cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x215cb8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x215cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x215cbc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x215cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x215cc0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x215cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x215cc4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x215cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x215cc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x215cc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ccc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x215cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x215cd0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x215cd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215cd4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x215cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x215cd8: 0x245488d0  addiu       $s4, $v0, -0x7730
    ctx->pc = 0x215cd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x215cdc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x215cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x215ce0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x215ce0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ce4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x215ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x215ce8: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x215ce8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x215cec: 0x0  nop
    ctx->pc = 0x215cecu;
    // NOP
label_215cf0:
    // 0x215cf0: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x215cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x215cf4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x215cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x215cf8: 0x2348021  addu        $s0, $s1, $s4
    ctx->pc = 0x215cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x215cfc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x215cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215d00: 0x84620042  lh          $v0, 0x42($v1)
    ctx->pc = 0x215d00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x215d04: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x215d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d08: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x215D08u;
    {
        const bool branch_taken_0x215d08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D08u;
        // 0x215d0c: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d08) {
            ctx->pc = 0x215D24u;
            goto label_215d24;
        }
    }
    ctx->pc = 0x215D10u;
    // 0x215d10: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x215d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d14: 0xc08534e  jal         func_214D38
    ctx->pc = 0x215D14u;
    SET_GPR_U32(ctx, 31, 0x215D1Cu);
    ctx->pc = 0x215D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D14u;
    // 0x215d18: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D38u, 0x215D14u, 0x215D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D1Cu;
label_215d1c:
    // 0x215d1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x215d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215d20: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x215d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_215d24:
    // 0x215d24: 0xc085710  jal         func_215C40
    ctx->pc = 0x215D24u;
    SET_GPR_U32(ctx, 31, 0x215D2Cu);
    ctx->pc = 0x215D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D24u;
    // 0x215d28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215C40u, 0x215D24u, 0x215D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D2Cu;
label_215d2c:
    // 0x215d2c: 0x2342021  addu        $a0, $s1, $s4
    ctx->pc = 0x215d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x215d30: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x215D30u;
    {
        const bool branch_taken_0x215d30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D30u;
        // 0x215d34: 0x2a450002  slti        $a1, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d30) {
            ctx->pc = 0x215D4Cu;
            goto label_215d4c;
        }
    }
    ctx->pc = 0x215D38u;
    // 0x215d38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x215d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215d3c: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215D3Cu;
    {
        const bool branch_taken_0x215d3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x215D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D3Cu;
        // 0x215d40: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d3c) {
            ctx->pc = 0x215D4Cu;
            goto label_215d4c;
        }
    }
    ctx->pc = 0x215D44u;
    // 0x215d44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x215d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215d48: 0xa462003e  sh          $v0, 0x3E($v1)
    ctx->pc = 0x215d48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 62), (uint16_t)GPR_U32(ctx, 2));
label_215d4c:
    // 0x215d4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x215d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x215d50: 0x14a0ffe7  bnez        $a1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x215D50u;
    {
        const bool branch_taken_0x215d50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x215D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D50u;
        // 0x215d54: 0xa04001bb  sb          $zero, 0x1BB($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 443), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d50) {
            ctx->pc = 0x215CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215cf0;
        }
    }
    ctx->pc = 0x215D58u;
    // 0x215d58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x215d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215d5c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x215d5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215d60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x215d60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215d64: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x215d64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215d68: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x215d68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215d6c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x215d6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x215d70: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x215d70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215d74: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x215d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x215d78: 0x3e00008  jr          $ra
    ctx->pc = 0x215D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D78u;
        // 0x215d7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215D80u;
}
