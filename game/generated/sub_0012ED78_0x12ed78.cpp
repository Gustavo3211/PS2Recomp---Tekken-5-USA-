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

// Function: sub_0012ED78
// Address: 0x12ed78 - 0x12eea8
void sub_0012ED78_0x12ed78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012ED78_0x12ed78");
#endif

    switch (ctx->pc) {
        case 0x12edd0u: goto label_12edd0;
        case 0x12edf4u: goto label_12edf4;
        case 0x12ee18u: goto label_12ee18;
        case 0x12ee30u: goto label_12ee30;
        case 0x12ee60u: goto label_12ee60;
        case 0x12ee7cu: goto label_12ee7c;
        default: break;
    }

    ctx->pc = 0x12ed78u;

    // 0x12ed78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ed78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ed7c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x12ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12ed80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12ed80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12ed84: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x12ed84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed88: 0x26830008  addiu       $v1, $s4, 0x8
    ctx->pc = 0x12ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12ed8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12ed8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ed90: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x12ed90u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12ed94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ed94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ed98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ed98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ed9c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x12ed9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eda0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12eda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12eda4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12eda4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eda8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12eda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12edac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12edacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12edb0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12edb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12edb4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12EDB4u;
    {
        const bool branch_taken_0x12edb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12edb4) {
            ctx->pc = 0x12EDB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EDB4u;
            // 0x12edb8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EDBCu;
            goto label_12edbc;
        }
    }
    ctx->pc = 0x12EDBCu;
label_12edbc:
    // 0x12edbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12edbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12edc0: 0x1812  mflo        $v1
    ctx->pc = 0x12edc0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x12edc4: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x12edc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12edc8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EDC8u;
    {
        const bool branch_taken_0x12edc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDC8u;
        // 0x12edcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edc8) {
            ctx->pc = 0x12EDECu;
            goto label_12edec;
        }
    }
    ctx->pc = 0x12EDD0u;
label_12edd0:
    // 0x12edd0: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x12edd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x12edd4: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x12edd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12edd8: 0x0  nop
    ctx->pc = 0x12edd8u;
    // NOP
    // 0x12eddc: 0x0  nop
    ctx->pc = 0x12eddcu;
    // NOP
    // 0x12ede0: 0x0  nop
    ctx->pc = 0x12ede0u;
    // NOP
    // 0x12ede4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12EDE4u;
    {
        const bool branch_taken_0x12ede4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDE4u;
        // 0x12ede8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ede4) {
            ctx->pc = 0x12EDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12edd0;
        }
    }
    ctx->pc = 0x12EDECu;
label_12edec:
    // 0x12edec: 0xc04bae6  jal         func_12EB98
    ctx->pc = 0x12EDECu;
    SET_GPR_U32(ctx, 31, 0x12EDF4u);
    ctx->pc = 0x12EDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDECu;
    // 0x12edf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB98u, 0x12EDECu, 0x12EDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDF4u;
label_12edf4:
    // 0x12edf4: 0x2a43000a  slti        $v1, $s2, 0xA
    ctx->pc = 0x12edf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12edf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12edf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12edfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ee00: 0xacb10014  sw          $s1, 0x14($a1)
    ctx->pc = 0x12ee00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 17));
    // 0x12ee04: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x12ee04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12ee08: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12EE08u;
    {
        const bool branch_taken_0x12ee08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE08u;
        // 0x12ee0c: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee08) {
            ctx->pc = 0x12EE48u;
            goto label_12ee48;
        }
    }
    ctx->pc = 0x12EE10u;
    // 0x12ee10: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x12ee10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x12ee14: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x12ee14u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_12ee18:
    // 0x12ee18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12ee18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12ee1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ee1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee20: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12ee20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12ee24: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x12ee24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x12ee28: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x12EE28u;
    SET_GPR_U32(ctx, 31, 0x12EE30u);
    ctx->pc = 0x12EE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EE28u;
    // 0x12ee2c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC70u, 0x12EE28u, 0x12EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE30u;
label_12ee30:
    // 0x12ee30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12ee30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee34: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x12ee34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12ee38: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12EE38u;
    {
        const bool branch_taken_0x12ee38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ee38) {
            ctx->pc = 0x12EE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EE38u;
            // 0x12ee3c: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ee18;
        }
    }
    ctx->pc = 0x12EE40u;
    // 0x12ee40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12EE40u;
    {
        const bool branch_taken_0x12ee40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE40u;
        // 0x12ee44: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee40) {
            ctx->pc = 0x12EE4Cu;
            goto label_12ee4c;
        }
    }
    ctx->pc = 0x12EE48u;
label_12ee48:
    // 0x12ee48: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x12ee48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_12ee4c:
    // 0x12ee4c: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x12ee4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x12ee50: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x12EE50u;
    {
        const bool branch_taken_0x12ee50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ee50) {
            ctx->pc = 0x12EE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EE50u;
            // 0x12ee54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EE88u;
            goto label_12ee88;
        }
    }
    ctx->pc = 0x12EE58u;
    // 0x12ee58: 0x2918823  subu        $s1, $s4, $s1
    ctx->pc = 0x12ee58u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x12ee5c: 0x0  nop
    ctx->pc = 0x12ee5cu;
    // NOP
label_12ee60:
    // 0x12ee60: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x12ee60u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12ee64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12ee64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12ee68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ee68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee6c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12ee6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12ee70: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x12ee70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x12ee74: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x12EE74u;
    SET_GPR_U32(ctx, 31, 0x12EE7Cu);
    ctx->pc = 0x12EE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EE74u;
    // 0x12ee78: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC70u, 0x12EE74u, 0x12EE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE7Cu;
label_12ee7c:
    // 0x12ee7c: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12EE7Cu;
    {
        const bool branch_taken_0x12ee7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE7Cu;
        // 0x12ee80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee7c) {
            ctx->pc = 0x12EE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ee60;
        }
    }
    ctx->pc = 0x12EE84u;
    // 0x12ee84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12ee84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12ee88:
    // 0x12ee88: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x12ee88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12ee8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ee90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12ee90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ee94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12ee94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ee98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12ee98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ee9c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12ee9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12eea0: 0x3e00008  jr          $ra
    ctx->pc = 0x12EEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEA0u;
        // 0x12eea4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EEA8u;
}
