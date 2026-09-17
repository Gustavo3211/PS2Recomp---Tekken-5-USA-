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

// Function: sub_0021BD18
// Address: 0x21bd18 - 0x21be20
void sub_0021BD18_0x21bd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BD18_0x21bd18");
#endif

    switch (ctx->pc) {
        case 0x21bda8u: goto label_21bda8;
        case 0x21bdd0u: goto label_21bdd0;
        default: break;
    }

    ctx->pc = 0x21bd18u;

    // 0x21bd18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21bd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21bd1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21bd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21bd20: 0x48840  sll         $s1, $a0, 1
    ctx->pc = 0x21bd20u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x21bd24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21bd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bd28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21bd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21bd2c: 0x23c3821  addu        $a3, $s1, $gp
    ctx->pc = 0x21bd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 28)));
    // 0x21bd30: 0x84e7c938  lh          $a3, -0x36C8($a3)
    ctx->pc = 0x21bd30u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294953272)));
    // 0x21bd34: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x21BD34u;
    {
        const bool branch_taken_0x21bd34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD34u;
        // 0x21bd38: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd34) {
            ctx->pc = 0x21BD70u;
            goto label_21bd70;
        }
    }
    ctx->pc = 0x21BD3Cu;
    // 0x21bd3c: 0x7c1021  addu        $v0, $v1, $gp
    ctx->pc = 0x21bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x21bd40: 0x8c42a850  lw          $v0, -0x57B0($v0)
    ctx->pc = 0x21bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944848)));
    // 0x21bd44: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x21bd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x21bd48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BD48u;
    {
        const bool branch_taken_0x21bd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD48u;
        // 0x21bd4c: 0x28e20302  slti        $v0, $a3, 0x302 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)770) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd48) {
            ctx->pc = 0x21BD58u;
            goto label_21bd58;
        }
    }
    ctx->pc = 0x21BD50u;
    // 0x21bd50: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21BD50u;
    {
        const bool branch_taken_0x21bd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD50u;
        // 0x21bd54: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd50) {
            ctx->pc = 0x21BD5Cu;
            goto label_21bd5c;
        }
    }
    ctx->pc = 0x21BD58u;
label_21bd58:
    // 0x21bd58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bd5c:
    // 0x21bd5c: 0x2783c938  addiu       $v1, $gp, -0x36C8
    ctx->pc = 0x21bd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953272));
    // 0x21bd60: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x21bd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x21bd64: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x21bd64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21bd68: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x21bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21bd6c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x21bd6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_21bd70:
    // 0x21bd70: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x21BD70u;
    {
        const bool branch_taken_0x21bd70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bd70) {
            ctx->pc = 0x21BDE8u;
            goto label_21bde8;
        }
    }
    ctx->pc = 0x21BD78u;
    // 0x21bd78: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x21BD78u;
    {
        const bool branch_taken_0x21bd78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD78u;
        // 0x21bd7c: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd78) {
            ctx->pc = 0x21BDE8u;
            goto label_21bde8;
        }
    }
    ctx->pc = 0x21BD80u;
    // 0x21bd80: 0x23c1821  addu        $v1, $s1, $gp
    ctx->pc = 0x21bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 28)));
    // 0x21bd84: 0x8463c938  lh          $v1, -0x36C8($v1)
    ctx->pc = 0x21bd84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294953272)));
    // 0x21bd88: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x21bd88u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21bd8c: 0x7062001a  div1        $zero, $v1, $v0
    ctx->pc = 0x21bd8cu;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 3); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x21bd90: 0x2012  mflo        $a0
    ctx->pc = 0x21bd90u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x21bd94: 0x70008012  mflo1       $s0
    ctx->pc = 0x21bd94u;
    SET_GPR_U64(ctx, 16, ctx->lo1);
    // 0x21bd98: 0x10900013  beq         $a0, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21BD98u;
    {
        const bool branch_taken_0x21bd98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x21BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD98u;
        // 0x21bd9c: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd98) {
            ctx->pc = 0x21BDE8u;
            goto label_21bde8;
        }
    }
    ctx->pc = 0x21BDA0u;
    // 0x21bda0: 0xc0a3a92  jal         func_28EA48
    ctx->pc = 0x21BDA0u;
    SET_GPR_U32(ctx, 31, 0x21BDA8u);
    ctx->pc = 0x21BDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BDA0u;
    // 0x21bda4: 0x26050001  addiu       $a1, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA48u, 0x21BDA0u, 0x21BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BDA8u;
label_21bda8:
    // 0x21bda8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x21bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21bdac: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21BDACu;
    {
        const bool branch_taken_0x21bdac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x21BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDACu;
        // 0x21bdb0: 0x2a020008  slti        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bdac) {
            ctx->pc = 0x21BDC0u;
            goto label_21bdc0;
        }
    }
    ctx->pc = 0x21BDB4u;
    // 0x21bdb4: 0x8f82a3b4  lw          $v0, -0x5C4C($gp)
    ctx->pc = 0x21bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943668)));
    // 0x21bdb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BDB8u;
    {
        const bool branch_taken_0x21bdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDB8u;
        // 0x21bdbc: 0x2a020008  slti        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bdb8) {
            ctx->pc = 0x21BDC8u;
            goto label_21bdc8;
        }
    }
    ctx->pc = 0x21BDC0u;
label_21bdc0:
    // 0x21bdc0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21BDC0u;
    {
        const bool branch_taken_0x21bdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bdc0) {
            ctx->pc = 0x21BDE8u;
            goto label_21bde8;
        }
    }
    ctx->pc = 0x21BDC8u;
label_21bdc8:
    // 0x21bdc8: 0xc091ab2  jal         func_246AC8
    ctx->pc = 0x21BDC8u;
    SET_GPR_U32(ctx, 31, 0x21BDD0u);
    ctx->pc = 0x21BDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BDC8u;
    // 0x21bdcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AC8u, 0x21BDC8u, 0x21BDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BDD0u;
label_21bdd0:
    // 0x21bdd0: 0x8f82a3b4  lw          $v0, -0x5C4C($gp)
    ctx->pc = 0x21bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943668)));
    // 0x21bdd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21BDD4u;
    {
        const bool branch_taken_0x21bdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDD4u;
        // 0x21bdd8: 0x2a020008  slti        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bdd4) {
            ctx->pc = 0x21BDE8u;
            goto label_21bde8;
        }
    }
    ctx->pc = 0x21BDDCu;
    // 0x21bddc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21BDDCu;
    {
        const bool branch_taken_0x21bddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDDCu;
        // 0x21bde0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bddc) {
            ctx->pc = 0x21BDE8u;
            goto label_21bde8;
        }
    }
    ctx->pc = 0x21BDE4u;
    // 0x21bde4: 0xaf82a3b4  sw          $v0, -0x5C4C($gp)
    ctx->pc = 0x21bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943668), GPR_U32(ctx, 2));
label_21bde8:
    // 0x21bde8: 0x2783c938  addiu       $v1, $gp, -0x36C8
    ctx->pc = 0x21bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953272));
    // 0x21bdec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x21bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x21bdf0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x21bdf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21bdf4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BDF4u;
    {
        const bool branch_taken_0x21bdf4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDF4u;
        // 0x21bdf8: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bdf4) {
            ctx->pc = 0x21BE04u;
            goto label_21be04;
        }
    }
    ctx->pc = 0x21BDFCu;
    // 0x21bdfc: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x21bdfcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x21be00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21be00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21be04:
    // 0x21be04: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x21be04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x21be08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21be08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21be0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21be0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21be10: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x21be10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x21be14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21be14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21be18: 0x3e00008  jr          $ra
    ctx->pc = 0x21BE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE18u;
        // 0x21be1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BE20u;
}
