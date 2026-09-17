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

// Function: sub_002C9B28
// Address: 0x2c9b28 - 0x2c9c60
void sub_002C9B28_0x2c9b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9B28_0x2c9b28");
#endif

    switch (ctx->pc) {
        case 0x2c9b70u: goto label_2c9b70;
        case 0x2c9bd0u: goto label_2c9bd0;
        default: break;
    }

    ctx->pc = 0x2c9b28u;

    // 0x2c9b28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c9b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c9b2c: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2c9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2c9b30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c9b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c9b34: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2c9b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9b38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c9b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c9b3c: 0x24428dc8  addiu       $v0, $v0, -0x7238
    ctx->pc = 0x2c9b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938056));
    // 0x2c9b40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c9b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c9b44: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c9b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c9b48: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c9b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2c9b4c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c9b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2c9b50: 0x8c530014  lw          $s3, 0x14($v0)
    ctx->pc = 0x2c9b50u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x178DDCu));
    // 0x2c9b54: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9B54u;
    {
        const bool branch_taken_0x2c9b54 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B54u;
        // 0x2c9b58: 0x8c54002c  lw          $s4, 0x2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b54) {
            ctx->pc = 0x2C9B64u;
            goto label_2c9b64;
        }
    }
    ctx->pc = 0x2C9B5Cu;
    // 0x2c9b5c: 0x12800038  beqz        $s4, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C9B5Cu;
    {
        const bool branch_taken_0x2c9b5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B5Cu;
        // 0x2c9b60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b5c) {
            ctx->pc = 0x2C9C40u;
            goto label_2c9c40;
        }
    }
    ctx->pc = 0x2C9B64u;
label_2c9b64:
    // 0x2c9b64: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2c9b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2c9b68: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2C9B68u;
    SET_GPR_U32(ctx, 31, 0x2C9B70u);
    ctx->pc = 0x2C9B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9B68u;
    // 0x2c9b6c: 0x24518d44  addiu       $s1, $v0, -0x72BC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937924));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2C9B68u, 0x2C9B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9B70u;
label_2c9b70:
    // 0x2c9b70: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2c9b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c9b74: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2c9b74u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2c9b78: 0x1810  mfhi        $v1
    ctx->pc = 0x2c9b78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2c9b7c: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x2c9b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c9b80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9B80u;
    {
        const bool branch_taken_0x2c9b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B80u;
        // 0x2c9b84: 0x2632005c  addiu       $s2, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b80) {
            ctx->pc = 0x2C9B90u;
            goto label_2c9b90;
        }
    }
    ctx->pc = 0x2C9B88u;
    // 0x2c9b88: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C9B88u;
    {
        const bool branch_taken_0x2c9b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B88u;
        // 0x2c9b8c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b88) {
            ctx->pc = 0x2C9BBCu;
            goto label_2c9bbc;
        }
    }
    ctx->pc = 0x2C9B90u;
label_2c9b90:
    // 0x2c9b90: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2c9b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c9b94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9B94u;
    {
        const bool branch_taken_0x2c9b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B94u;
        // 0x2c9b98: 0x2c62000a  sltiu       $v0, $v1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b94) {
            ctx->pc = 0x2C9BA8u;
            goto label_2c9ba8;
        }
    }
    ctx->pc = 0x2C9B9Cu;
    // 0x2c9b9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9B9Cu;
    {
        const bool branch_taken_0x2c9b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B9Cu;
        // 0x2c9ba0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b9c) {
            ctx->pc = 0x2C9BBCu;
            goto label_2c9bbc;
        }
    }
    ctx->pc = 0x2C9BA4u;
    // 0x2c9ba4: 0x0  nop
    ctx->pc = 0x2c9ba4u;
    // NOP
label_2c9ba8:
    // 0x2c9ba8: 0x2c630009  sltiu       $v1, $v1, 0x9
    ctx->pc = 0x2c9ba8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2c9bac: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x2c9bacu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x2c9bb0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c9bb4: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x2c9bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x2c9bb8: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x2c9bb8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_2c9bbc:
    // 0x2c9bbc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2c9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c9bc0: 0x56020017  bnel        $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C9BC0u;
    {
        const bool branch_taken_0x2c9bc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c9bc0) {
            ctx->pc = 0x2C9BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9BC0u;
            // 0x2c9bc4: 0x9222000c  lbu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9C20u;
            goto label_2c9c20;
        }
    }
    ctx->pc = 0x2C9BC8u;
    // 0x2c9bc8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2C9BC8u;
    SET_GPR_U32(ctx, 31, 0x2C9BD0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2C9BC8u, 0x2C9BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9BD0u;
label_2c9bd0:
    // 0x2c9bd0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2c9bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c9bd4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2c9bd4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c9bd8: 0x2010  mfhi        $a0
    ctx->pc = 0x2c9bd8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2c9bdc: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2c9bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2c9be0: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9BE0u;
    {
        const bool branch_taken_0x2c9be0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9BE0u;
        // 0x2c9be4: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9be0) {
            ctx->pc = 0x2C9C00u;
            goto label_2c9c00;
        }
    }
    ctx->pc = 0x2C9BE8u;
    // 0x2c9be8: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x2c9be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c9bec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9BECu;
    {
        const bool branch_taken_0x2c9bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9bec) {
            ctx->pc = 0x2C9C04u;
            goto label_2c9c04;
        }
    }
    ctx->pc = 0x2C9BF4u;
    // 0x2c9bf4: 0xa224000c  sb          $a0, 0xC($s1)
    ctx->pc = 0x2c9bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c9bf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9BF8u;
    {
        const bool branch_taken_0x2c9bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9BF8u;
        // 0x2c9bfc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9bf8) {
            ctx->pc = 0x2C9C04u;
            goto label_2c9c04;
        }
    }
    ctx->pc = 0x2C9C00u;
label_2c9c00:
    // 0x2c9c00: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x2c9c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_2c9c04:
    // 0x2c9c04: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9C04u;
    {
        const bool branch_taken_0x2c9c04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C04u;
        // 0x2c9c08: 0x9243000c  lbu         $v1, 0xC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c04) {
            ctx->pc = 0x2C9C24u;
            goto label_2c9c24;
        }
    }
    ctx->pc = 0x2C9C0Cu;
    // 0x2c9c0c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9C0Cu;
    {
        const bool branch_taken_0x2c9c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9c0c) {
            ctx->pc = 0x2C9C24u;
            goto label_2c9c24;
        }
    }
    ctx->pc = 0x2C9C14u;
    // 0x2c9c14: 0xa244000c  sb          $a0, 0xC($s2)
    ctx->pc = 0x2c9c14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c9c18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9C18u;
    {
        const bool branch_taken_0x2c9c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C18u;
        // 0x2c9c1c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c18) {
            ctx->pc = 0x2C9C24u;
            goto label_2c9c24;
        }
    }
    ctx->pc = 0x2C9C20u;
label_2c9c20:
    // 0x2c9c20: 0x9243000c  lbu         $v1, 0xC($s2)
    ctx->pc = 0x2c9c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
label_2c9c24:
    // 0x2c9c24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9C24u;
    {
        const bool branch_taken_0x2c9c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C24u;
        // 0x2c9c28: 0x244200ff  addiu       $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c24) {
            ctx->pc = 0x2C9C30u;
            goto label_2c9c30;
        }
    }
    ctx->pc = 0x2C9C2Cu;
    // 0x2c9c2c: 0xa222000c  sb          $v0, 0xC($s1)
    ctx->pc = 0x2c9c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
label_2c9c30:
    // 0x2c9c30: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9C30u;
    {
        const bool branch_taken_0x2c9c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C30u;
        // 0x2c9c34: 0x246200ff  addiu       $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c30) {
            ctx->pc = 0x2C9C3Cu;
            goto label_2c9c3c;
        }
    }
    ctx->pc = 0x2C9C38u;
    // 0x2c9c38: 0xa242000c  sb          $v0, 0xC($s2)
    ctx->pc = 0x2c9c38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
label_2c9c3c:
    // 0x2c9c3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c9c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9c40:
    // 0x2c9c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9c44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c9c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c9c48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c9c48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9c4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c9c4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c9c50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c9c50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9c54: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c9c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c9c58: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C58u;
        // 0x2c9c5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9C60u;
}
