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

// Function: sub_00271E88
// Address: 0x271e88 - 0x2721e8
void sub_00271E88_0x271e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271E88_0x271e88");
#endif

    switch (ctx->pc) {
        case 0x271e9cu: goto label_271e9c;
        case 0x27216cu: goto label_27216c;
        case 0x2721bcu: goto label_2721bc;
        default: break;
    }

    ctx->pc = 0x271e88u;

    // 0x271e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x271e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x271e8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x271e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x271e90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x271e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x271e94: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x271E94u;
    SET_GPR_U32(ctx, 31, 0x271E9Cu);
    ctx->pc = 0x271E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E94u;
    // 0x271e98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x271E94u, 0x271E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E9Cu;
label_271e9c:
    // 0x271e9c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x271e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x271ea0: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x271ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271ea4: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x271ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x271ea8: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x271ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x271eac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x271eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x271eb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x271eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x271eb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x271eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x271eb8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x271eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x271ebc: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x271ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x271ec0: 0x220c2  srl         $a0, $v0, 3
    ctx->pc = 0x271ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x271ec4: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x271ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x271ec8: 0x8ce2008c  lw          $v0, 0x8C($a3)
    ctx->pc = 0x271ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x271ecc: 0x28420024  slti        $v0, $v0, 0x24
    ctx->pc = 0x271eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x271ed0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x271ed0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x271ed4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x271ED4u;
    {
        const bool branch_taken_0x271ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x271ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271ED4u;
        // 0x271ed8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ed4) {
            ctx->pc = 0x271EF0u;
            goto label_271ef0;
        }
    }
    ctx->pc = 0x271EDCu;
    // 0x271edc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271ee0: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x271EE0u;
    {
        const bool branch_taken_0x271ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x271EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271EE0u;
        // 0x271ee4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ee0) {
            ctx->pc = 0x272000u;
            goto label_272000;
        }
    }
    ctx->pc = 0x271EE8u;
    // 0x271ee8: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x271EE8u;
    {
        const bool branch_taken_0x271ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271ee8) {
            ctx->pc = 0x272184u;
            goto label_272184;
        }
    }
    ctx->pc = 0x271EF0u;
label_271ef0:
    // 0x271ef0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x271ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x271ef4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x271ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x271ef8: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x271EF8u;
    {
        const bool branch_taken_0x271ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271EF8u;
        // 0x271efc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ef8) {
            ctx->pc = 0x272184u;
            goto label_272184;
        }
    }
    ctx->pc = 0x271F00u;
    // 0x271f00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x271f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x271f04: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x271f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x271f08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x271f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x271f0c: 0x8c632bc0  lw          $v1, 0x2BC0($v1)
    ctx->pc = 0x271f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11200)));
    // 0x271f10: 0x600008  jr          $v1
    ctx->pc = 0x271F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x271F18u: goto label_271f18;
            case 0x271F30u: goto label_271f30;
            case 0x271F88u: goto label_271f88;
            case 0x271FB0u: goto label_271fb0;
            case 0x271FD0u: goto label_271fd0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271F10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x271F18u;
label_271f18:
    // 0x271f18: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x271f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x271f1c: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x271F1Cu;
    {
        const bool branch_taken_0x271f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F1Cu;
        // 0x271f20: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f1c) {
            ctx->pc = 0x272184u;
            goto label_272184;
        }
    }
    ctx->pc = 0x271F24u;
    // 0x271f24: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x271F24u;
    {
        const bool branch_taken_0x271f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F24u;
        // 0x271f28: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f24) {
            ctx->pc = 0x272184u;
            goto label_272184;
        }
    }
    ctx->pc = 0x271F2Cu;
    // 0x271f2c: 0x0  nop
    ctx->pc = 0x271f2cu;
    // NOP
label_271f30:
    // 0x271f30: 0x2882007a  slti        $v0, $a0, 0x7A
    ctx->pc = 0x271f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)122) ? 1 : 0);
    // 0x271f34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271F34u;
    {
        const bool branch_taken_0x271f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F34u;
        // 0x271f38: 0x288201eb  slti        $v0, $a0, 0x1EB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)491) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f34) {
            ctx->pc = 0x271F48u;
            goto label_271f48;
        }
    }
    ctx->pc = 0x271F3Cu;
    // 0x271f3c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x271F3Cu;
    {
        const bool branch_taken_0x271f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F3Cu;
        // 0x271f40: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f3c) {
            ctx->pc = 0x272180u;
            goto label_272180;
        }
    }
    ctx->pc = 0x271F44u;
    // 0x271f44: 0x0  nop
    ctx->pc = 0x271f44u;
    // NOP
label_271f48:
    // 0x271f48: 0x5440008d  bnel        $v0, $zero, . + 4 + (0x8D << 2)
    ctx->pc = 0x271F48u;
    {
        const bool branch_taken_0x271f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271f48) {
            ctx->pc = 0x271F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271F48u;
            // 0x271f4c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272180u;
            goto label_272180;
        }
    }
    ctx->pc = 0x271F50u;
    // 0x271f50: 0x28820214  slti        $v0, $a0, 0x214
    ctx->pc = 0x271f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)532) ? 1 : 0);
    // 0x271f54: 0x5440008a  bnel        $v0, $zero, . + 4 + (0x8A << 2)
    ctx->pc = 0x271F54u;
    {
        const bool branch_taken_0x271f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271f54) {
            ctx->pc = 0x271F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271F54u;
            // 0x271f58: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272180u;
            goto label_272180;
        }
    }
    ctx->pc = 0x271F5Cu;
    // 0x271f5c: 0x84c2035e  lh          $v0, 0x35E($a2)
    ctx->pc = 0x271f5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 862)));
    // 0x271f60: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x271f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x271f64: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x271f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x271f68: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x271f68u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x271f6c: 0x1012  mflo        $v0
    ctx->pc = 0x271f6cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x271f70: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x271f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x271f74: 0x54400082  bnel        $v0, $zero, . + 4 + (0x82 << 2)
    ctx->pc = 0x271F74u;
    {
        const bool branch_taken_0x271f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271f74) {
            ctx->pc = 0x271F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271F74u;
            // 0x271f78: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272180u;
            goto label_272180;
        }
    }
    ctx->pc = 0x271F7Cu;
    // 0x271f7c: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x271F7Cu;
    {
        const bool branch_taken_0x271f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F7Cu;
        // 0x271f80: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f7c) {
            ctx->pc = 0x272184u;
            goto label_272184;
        }
    }
    ctx->pc = 0x271F84u;
    // 0x271f84: 0x0  nop
    ctx->pc = 0x271f84u;
    // NOP
label_271f88:
    // 0x271f88: 0x28820666  slti        $v0, $a0, 0x666
    ctx->pc = 0x271f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1638) ? 1 : 0);
    // 0x271f8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271F8Cu;
    {
        const bool branch_taken_0x271f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F8Cu;
        // 0x271f90: 0x28820b33  slti        $v0, $a0, 0xB33 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2867) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f8c) {
            ctx->pc = 0x271FA0u;
            goto label_271fa0;
        }
    }
    ctx->pc = 0x271F94u;
    // 0x271f94: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x271F94u;
    {
        const bool branch_taken_0x271f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F94u;
        // 0x271f98: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f94) {
            ctx->pc = 0x272180u;
            goto label_272180;
        }
    }
    ctx->pc = 0x271F9Cu;
    // 0x271f9c: 0x0  nop
    ctx->pc = 0x271f9cu;
    // NOP
label_271fa0:
    // 0x271fa0: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x271FA0u;
    {
        const bool branch_taken_0x271fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FA0u;
        // 0x271fa4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fa0) {
            ctx->pc = 0x272184u;
            goto label_272184;
        }
    }
    ctx->pc = 0x271FA8u;
    // 0x271fa8: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x271FA8u;
    {
        const bool branch_taken_0x271fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FA8u;
        // 0x271fac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fa8) {
            ctx->pc = 0x272184u;
            goto label_272184;
        }
    }
    ctx->pc = 0x271FB0u;
label_271fb0:
    // 0x271fb0: 0x288200cc  slti        $v0, $a0, 0xCC
    ctx->pc = 0x271fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)204) ? 1 : 0);
    // 0x271fb4: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x271FB4u;
    {
        const bool branch_taken_0x271fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FB4u;
        // 0x271fb8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fb4) {
            ctx->pc = 0x272180u;
            goto label_272180;
        }
    }
    ctx->pc = 0x271FBCu;
    // 0x271fbc: 0x28830599  slti        $v1, $a0, 0x599
    ctx->pc = 0x271fbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1433) ? 1 : 0);
    // 0x271fc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271fc4: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x271fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x271fc8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x271FC8u;
    {
        const bool branch_taken_0x271fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FC8u;
        // 0x271fcc: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fc8) {
            ctx->pc = 0x272180u;
            goto label_272180;
        }
    }
    ctx->pc = 0x271FD0u;
label_271fd0:
    // 0x271fd0: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x271fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x271fd4: 0x284202d1  slti        $v0, $v0, 0x2D1
    ctx->pc = 0x271fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)721) ? 1 : 0);
    // 0x271fd8: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x271FD8u;
    {
        const bool branch_taken_0x271fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FD8u;
        // 0x271fdc: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fd8) {
            ctx->pc = 0x272180u;
            goto label_272180;
        }
    }
    ctx->pc = 0x271FE0u;
    // 0x271fe0: 0x8cc20294  lw          $v0, 0x294($a2)
    ctx->pc = 0x271fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 660)));
    // 0x271fe4: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x271FE4u;
    {
        const bool branch_taken_0x271fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FE4u;
        // 0x271fe8: 0x2882011e  slti        $v0, $a0, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)286) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fe4) {
            ctx->pc = 0x272180u;
            goto label_272180;
        }
    }
    ctx->pc = 0x271FECu;
    // 0x271fec: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x271FECu;
    {
        const bool branch_taken_0x271fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FECu;
        // 0x271ff0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fec) {
            ctx->pc = 0x272180u;
            goto label_272180;
        }
    }
    ctx->pc = 0x271FF4u;
    // 0x271ff4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x271FF4u;
    {
        const bool branch_taken_0x271ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FF4u;
        // 0x271ff8: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ff4) {
            ctx->pc = 0x272180u;
            goto label_272180;
        }
    }
    ctx->pc = 0x271FFCu;
    // 0x271ffc: 0x0  nop
    ctx->pc = 0x271ffcu;
    // NOP
label_272000:
    // 0x272000: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x272000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x272004: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x272004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x272008: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x272008u;
    {
        const bool branch_taken_0x272008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272008u;
        // 0x27200c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272008) {
            ctx->pc = 0x272154u;
            goto label_272154;
        }
    }
    ctx->pc = 0x272010u;
    // 0x272010: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x272010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x272014: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x272014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x272018: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x272018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27201c: 0x8c632be0  lw          $v1, 0x2BE0($v1)
    ctx->pc = 0x27201cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11232)));
    // 0x272020: 0x600008  jr          $v1
    ctx->pc = 0x272020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x272028u: goto label_272028;
            case 0x272040u: goto label_272040;
            case 0x272060u: goto label_272060;
            case 0x2720B8u: goto label_2720b8;
            case 0x272100u: goto label_272100;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272020u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x272028u;
label_272028:
    // 0x272028: 0x28820199  slti        $v0, $a0, 0x199
    ctx->pc = 0x272028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)409) ? 1 : 0);
    // 0x27202c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27202Cu;
    {
        const bool branch_taken_0x27202c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27202Cu;
        // 0x272030: 0x28820333  slti        $v0, $a0, 0x333 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)819) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27202c) {
            ctx->pc = 0x272050u;
            goto label_272050;
        }
    }
    ctx->pc = 0x272034u;
    // 0x272034: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x272034u;
    {
        const bool branch_taken_0x272034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272034u;
        // 0x272038: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272034) {
            ctx->pc = 0x272150u;
            goto label_272150;
        }
    }
    ctx->pc = 0x27203Cu;
    // 0x27203c: 0x0  nop
    ctx->pc = 0x27203cu;
    // NOP
label_272040:
    // 0x272040: 0x28820028  slti        $v0, $a0, 0x28
    ctx->pc = 0x272040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x272044: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x272044u;
    {
        const bool branch_taken_0x272044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272044) {
            ctx->pc = 0x272048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272044u;
            // 0x272048: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272150u;
            goto label_272150;
        }
    }
    ctx->pc = 0x27204Cu;
    // 0x27204c: 0x28820170  slti        $v0, $a0, 0x170
    ctx->pc = 0x27204cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)368) ? 1 : 0);
label_272050:
    // 0x272050: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x272050u;
    {
        const bool branch_taken_0x272050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272050u;
        // 0x272054: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272050) {
            ctx->pc = 0x272154u;
            goto label_272154;
        }
    }
    ctx->pc = 0x272058u;
    // 0x272058: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x272058u;
    {
        const bool branch_taken_0x272058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272058u;
        // 0x27205c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272058) {
            ctx->pc = 0x272154u;
            goto label_272154;
        }
    }
    ctx->pc = 0x272060u;
label_272060:
    // 0x272060: 0x288201eb  slti        $v0, $a0, 0x1EB
    ctx->pc = 0x272060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)491) ? 1 : 0);
    // 0x272064: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x272064u;
    {
        const bool branch_taken_0x272064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272064) {
            ctx->pc = 0x272068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272064u;
            // 0x272068: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272150u;
            goto label_272150;
        }
    }
    ctx->pc = 0x27206Cu;
    // 0x27206c: 0x28820214  slti        $v0, $a0, 0x214
    ctx->pc = 0x27206cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)532) ? 1 : 0);
    // 0x272070: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x272070u;
    {
        const bool branch_taken_0x272070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272070) {
            ctx->pc = 0x272074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272070u;
            // 0x272074: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272150u;
            goto label_272150;
        }
    }
    ctx->pc = 0x272078u;
    // 0x272078: 0x28820218  slti        $v0, $a0, 0x218
    ctx->pc = 0x272078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)536) ? 1 : 0);
    // 0x27207c: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x27207Cu;
    {
        const bool branch_taken_0x27207c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27207c) {
            ctx->pc = 0x272080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27207Cu;
            // 0x272080: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272150u;
            goto label_272150;
        }
    }
    ctx->pc = 0x272084u;
    // 0x272084: 0x2882022d  slti        $v0, $a0, 0x22D
    ctx->pc = 0x272084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)557) ? 1 : 0);
    // 0x272088: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x272088u;
    {
        const bool branch_taken_0x272088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272088) {
            ctx->pc = 0x27208Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272088u;
            // 0x27208c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272150u;
            goto label_272150;
        }
    }
    ctx->pc = 0x272090u;
    // 0x272090: 0x28820241  slti        $v0, $a0, 0x241
    ctx->pc = 0x272090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)577) ? 1 : 0);
    // 0x272094: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x272094u;
    {
        const bool branch_taken_0x272094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272094u;
        // 0x272098: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272094) {
            ctx->pc = 0x272154u;
            goto label_272154;
        }
    }
    ctx->pc = 0x27209Cu;
    // 0x27209c: 0x8cc20320  lw          $v0, 0x320($a2)
    ctx->pc = 0x27209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 800)));
    // 0x2720a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2720a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2720a4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2720A4u;
    {
        const bool branch_taken_0x2720a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720A4u;
        // 0x2720a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720a4) {
            ctx->pc = 0x272154u;
            goto label_272154;
        }
    }
    ctx->pc = 0x2720ACu;
    // 0x2720ac: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2720ACu;
    {
        const bool branch_taken_0x2720ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720ACu;
        // 0x2720b0: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720ac) {
            ctx->pc = 0x272154u;
            goto label_272154;
        }
    }
    ctx->pc = 0x2720B4u;
    // 0x2720b4: 0x0  nop
    ctx->pc = 0x2720b4u;
    // NOP
label_2720b8:
    // 0x2720b8: 0x28820080  slti        $v0, $a0, 0x80
    ctx->pc = 0x2720b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2720bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2720BCu;
    {
        const bool branch_taken_0x2720bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720BCu;
        // 0x2720c0: 0x28820090  slti        $v0, $a0, 0x90 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)144) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720bc) {
            ctx->pc = 0x2720D0u;
            goto label_2720d0;
        }
    }
    ctx->pc = 0x2720C4u;
    // 0x2720c4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2720C4u;
    {
        const bool branch_taken_0x2720c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720C4u;
        // 0x2720c8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720c4) {
            ctx->pc = 0x272150u;
            goto label_272150;
        }
    }
    ctx->pc = 0x2720CCu;
    // 0x2720cc: 0x0  nop
    ctx->pc = 0x2720ccu;
    // NOP
label_2720d0:
    // 0x2720d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2720D0u;
    {
        const bool branch_taken_0x2720d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720D0u;
        // 0x2720d4: 0x288200c0  slti        $v0, $a0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)192) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720d0) {
            ctx->pc = 0x2720E0u;
            goto label_2720e0;
        }
    }
    ctx->pc = 0x2720D8u;
    // 0x2720d8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2720D8u;
    {
        const bool branch_taken_0x2720d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720D8u;
        // 0x2720dc: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720d8) {
            ctx->pc = 0x272150u;
            goto label_272150;
        }
    }
    ctx->pc = 0x2720E0u;
label_2720e0:
    // 0x2720e0: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2720E0u;
    {
        const bool branch_taken_0x2720e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2720e0) {
            ctx->pc = 0x2720E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2720E0u;
            // 0x2720e4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272150u;
            goto label_272150;
        }
    }
    ctx->pc = 0x2720E8u;
    // 0x2720e8: 0x288203c0  slti        $v0, $a0, 0x3C0
    ctx->pc = 0x2720e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)960) ? 1 : 0);
    // 0x2720ec: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2720ECu;
    {
        const bool branch_taken_0x2720ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720ECu;
        // 0x2720f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720ec) {
            ctx->pc = 0x272154u;
            goto label_272154;
        }
    }
    ctx->pc = 0x2720F4u;
    // 0x2720f4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2720F4u;
    {
        const bool branch_taken_0x2720f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720F4u;
        // 0x2720f8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720f4) {
            ctx->pc = 0x272154u;
            goto label_272154;
        }
    }
    ctx->pc = 0x2720FCu;
    // 0x2720fc: 0x0  nop
    ctx->pc = 0x2720fcu;
    // NOP
label_272100:
    // 0x272100: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x272100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x272104: 0x284202d1  slti        $v0, $v0, 0x2D1
    ctx->pc = 0x272104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)721) ? 1 : 0);
    // 0x272108: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x272108u;
    {
        const bool branch_taken_0x272108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272108u;
        // 0x27210c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272108) {
            ctx->pc = 0x272150u;
            goto label_272150;
        }
    }
    ctx->pc = 0x272110u;
    // 0x272110: 0x8cc20294  lw          $v0, 0x294($a2)
    ctx->pc = 0x272110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 660)));
    // 0x272114: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x272114u;
    {
        const bool branch_taken_0x272114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272114u;
        // 0x272118: 0x28820051  slti        $v0, $a0, 0x51 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)81) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272114) {
            ctx->pc = 0x272150u;
            goto label_272150;
        }
    }
    ctx->pc = 0x27211Cu;
    // 0x27211c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27211Cu;
    {
        const bool branch_taken_0x27211c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27211Cu;
        // 0x272120: 0x288200cc  slti        $v0, $a0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27211c) {
            ctx->pc = 0x272130u;
            goto label_272130;
        }
    }
    ctx->pc = 0x272124u;
    // 0x272124: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x272124u;
    {
        const bool branch_taken_0x272124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272124u;
        // 0x272128: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272124) {
            ctx->pc = 0x272154u;
            goto label_272154;
        }
    }
    ctx->pc = 0x27212Cu;
    // 0x27212c: 0x0  nop
    ctx->pc = 0x27212cu;
    // NOP
label_272130:
    // 0x272130: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x272130u;
    {
        const bool branch_taken_0x272130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272130u;
        // 0x272134: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272130) {
            ctx->pc = 0x272150u;
            goto label_272150;
        }
    }
    ctx->pc = 0x272138u;
    // 0x272138: 0x28820400  slti        $v0, $a0, 0x400
    ctx->pc = 0x272138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x27213c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27213Cu;
    {
        const bool branch_taken_0x27213c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27213Cu;
        // 0x272140: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27213c) {
            ctx->pc = 0x272150u;
            goto label_272150;
        }
    }
    ctx->pc = 0x272144u;
    // 0x272144: 0x288205eb  slti        $v0, $a0, 0x5EB
    ctx->pc = 0x272144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1515) ? 1 : 0);
    // 0x272148: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x272148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27214c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x27214cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_272150:
    // 0x272150: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x272150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_272154:
    // 0x272154: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272154u;
    {
        const bool branch_taken_0x272154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x272158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272154u;
        // 0x272158: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272154) {
            ctx->pc = 0x272164u;
            goto label_272164;
        }
    }
    ctx->pc = 0x27215Cu;
    // 0x27215c: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27215Cu;
    {
        const bool branch_taken_0x27215c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x272160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27215Cu;
        // 0x272160: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27215c) {
            ctx->pc = 0x272184u;
            goto label_272184;
        }
    }
    ctx->pc = 0x272164u;
label_272164:
    // 0x272164: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x272164u;
    SET_GPR_U32(ctx, 31, 0x27216Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x272164u, 0x27216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27216Cu;
label_27216c:
    // 0x27216c: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x27216cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272170: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x272170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x272174: 0x84e30386  lh          $v1, 0x386($a3)
    ctx->pc = 0x272174u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 902)));
    // 0x272178: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x272178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27217c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x27217cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_272180:
    // 0x272180: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x272180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_272184:
    // 0x272184: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272184u;
    {
        const bool branch_taken_0x272184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x272188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272184u;
        // 0x272188: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272184) {
            ctx->pc = 0x272194u;
            goto label_272194;
        }
    }
    ctx->pc = 0x27218Cu;
    // 0x27218c: 0x16020011  bne         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27218Cu;
    {
        const bool branch_taken_0x27218c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x272190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27218Cu;
        // 0x272190: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27218c) {
            ctx->pc = 0x2721D4u;
            goto label_2721d4;
        }
    }
    ctx->pc = 0x272194u;
label_272194:
    // 0x272194: 0x8ce2032c  lw          $v0, 0x32C($a3)
    ctx->pc = 0x272194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 812)));
    // 0x272198: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x272198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x27219c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2721a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2721A0u;
    {
        const bool branch_taken_0x2721a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2721a0) {
            ctx->pc = 0x2721B4u;
            goto label_2721b4;
        }
    }
    ctx->pc = 0x2721A8u;
    // 0x2721a8: 0x8ce20330  lw          $v0, 0x330($a3)
    ctx->pc = 0x2721a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 816)));
    // 0x2721ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2721ACu;
    {
        const bool branch_taken_0x2721ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2721B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721ACu;
        // 0x2721b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721ac) {
            ctx->pc = 0x2721D4u;
            goto label_2721d4;
        }
    }
    ctx->pc = 0x2721B4u;
label_2721b4:
    // 0x2721b4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2721B4u;
    SET_GPR_U32(ctx, 31, 0x2721BCu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2721B4u, 0x2721BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2721BCu;
label_2721bc:
    // 0x2721bc: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2721bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2721c0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2721c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2721c4: 0x84640380  lh          $a0, 0x380($v1)
    ctx->pc = 0x2721c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x2721c8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2721c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2721cc: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x2721ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2721d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2721d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2721d4:
    // 0x2721d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2721d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2721d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2721d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2721dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2721DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2721E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721DCu;
        // 0x2721e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2721DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2721E4u;
    // 0x2721e4: 0x0  nop
    ctx->pc = 0x2721e4u;
    // NOP
    ctx->pc = 0x2721e8u;
}
