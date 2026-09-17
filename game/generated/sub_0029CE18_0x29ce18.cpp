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

// Function: sub_0029CE18
// Address: 0x29ce18 - 0x29cf30
void sub_0029CE18_0x29ce18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CE18_0x29ce18");
#endif

    switch (ctx->pc) {
        case 0x29ceb0u: goto label_29ceb0;
        case 0x29cec8u: goto label_29cec8;
        default: break;
    }

    ctx->pc = 0x29ce18u;

    // 0x29ce18: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29ce1c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29ce1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29ce20: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x29ce20u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29ce24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ce24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ce28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29ce28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29ce2c: 0x58840  sll         $s1, $a1, 1
    ctx->pc = 0x29ce2cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x29ce30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29ce30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29ce34: 0x64040  sll         $t0, $a2, 1
    ctx->pc = 0x29ce34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x29ce38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29ce38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29ce3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29ce3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ce40: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29ce40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x29ce44: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29ce44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ce48: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29ce48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x29ce4c: 0x106a821  addu        $s5, $t0, $a2
    ctx->pc = 0x29ce4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x29ce50: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29ce50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x29ce54: 0x24160021  addiu       $s6, $zero, 0x21
    ctx->pc = 0x29ce54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x29ce58: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x29ce58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x29ce5c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x29ce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x29ce60: 0x8e8a0154  lw          $t2, 0x154($s4)
    ctx->pc = 0x29ce60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 340)));
    // 0x29ce64: 0x8e890158  lw          $t1, 0x158($s4)
    ctx->pc = 0x29ce64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 344)));
    // 0x29ce68: 0x25420030  addiu       $v0, $t2, 0x30
    ctx->pc = 0x29ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x29ce6c: 0x25530050  addiu       $s3, $t2, 0x50
    ctx->pc = 0x29ce6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 10), 80));
    // 0x29ce70: 0x252b0028  addiu       $t3, $t1, 0x28
    ctx->pc = 0x29ce70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 40));
    // 0x29ce74: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29ce74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29ce78: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x29ce78u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29ce7c: 0x25320050  addiu       $s2, $t1, 0x50
    ctx->pc = 0x29ce7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x29ce80: 0x1812  mflo        $v1
    ctx->pc = 0x29ce80u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x29ce84: 0x3810  mfhi        $a3
    ctx->pc = 0x29ce84u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x29ce88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29ce8c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x29ce8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x29ce90: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x29ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x29ce94: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x29ce94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x29ce98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29ce9c: 0xad820078  sw          $v0, 0x78($t4)
    ctx->pc = 0x29ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 120), GPR_U32(ctx, 2));
    // 0x29cea0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x29cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29cea4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x29cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29cea8: 0xac620078  sw          $v0, 0x78($v1)
    ctx->pc = 0x29cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
    // 0x29ceac: 0x0  nop
    ctx->pc = 0x29ceacu;
    // NOP
label_29ceb0:
    // 0x29ceb0: 0x8e830150  lw          $v1, 0x150($s4)
    ctx->pc = 0x29ceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 336)));
    // 0x29ceb4: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x29ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x29ceb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29cebc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29cec0: 0xc0a7982  jal         func_29E608
    ctx->pc = 0x29CEC0u;
    SET_GPR_U32(ctx, 31, 0x29CEC8u);
    ctx->pc = 0x29CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CEC0u;
    // 0x29cec4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E608u, 0x29CEC0u, 0x29CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CEC8u;
label_29cec8:
    // 0x29cec8: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x29cec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x29cecc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29ceccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x29ced0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x29ced0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29ced4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29ced4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29ced8: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x29ced8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x29cedc: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x29cedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x29cee0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x29cee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cee4: 0x14560004  bne         $v0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x29CEE4u;
    {
        const bool branch_taken_0x29cee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x29CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEE4u;
        // 0x29cee8: 0x2a060002  slti        $a2, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cee4) {
            ctx->pc = 0x29CEF8u;
            goto label_29cef8;
        }
    }
    ctx->pc = 0x29CEECu;
    // 0x29ceec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29cef0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29CEF0u;
    {
        const bool branch_taken_0x29cef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEF0u;
        // 0x29cef4: 0x8e420064  lw          $v0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cef0) {
            ctx->pc = 0x29CF00u;
            goto label_29cf00;
        }
    }
    ctx->pc = 0x29CEF8u;
label_29cef8:
    // 0x29cef8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29cefc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x29cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_29cf00:
    // 0x29cf00: 0x14c0ffeb  bnez        $a2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x29CF00u;
    {
        const bool branch_taken_0x29cf00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF00u;
        // 0x29cf04: 0xac620078  sw          $v0, 0x78($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf00) {
            ctx->pc = 0x29CEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ceb0;
        }
    }
    ctx->pc = 0x29CF08u;
    // 0x29cf08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29cf08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cf0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29cf0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29cf10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29cf10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29cf14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29cf14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29cf18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29cf18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29cf1c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29cf1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29cf20: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29cf20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29cf24: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x29cf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cf28: 0x3e00008  jr          $ra
    ctx->pc = 0x29CF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF28u;
        // 0x29cf2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CF30u;
}
