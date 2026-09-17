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

// Function: sub_0010AA08
// Address: 0x10aa08 - 0x10ab60
void sub_0010AA08_0x10aa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AA08_0x10aa08");
#endif

    switch (ctx->pc) {
        case 0x10aa50u: goto label_10aa50;
        case 0x10aa64u: goto label_10aa64;
        case 0x10aa70u: goto label_10aa70;
        case 0x10aa78u: goto label_10aa78;
        case 0x10aa84u: goto label_10aa84;
        case 0x10aaa0u: goto label_10aaa0;
        case 0x10aae4u: goto label_10aae4;
        case 0x10aaf4u: goto label_10aaf4;
        case 0x10ab04u: goto label_10ab04;
        case 0x10ab1cu: goto label_10ab1c;
        default: break;
    }

    ctx->pc = 0x10aa08u;

    // 0x10aa08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10aa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10aa0c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x10aa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x10aa10: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x10aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x10aa14: 0x241701b3  addiu       $s7, $zero, 0x1B3
    ctx->pc = 0x10aa14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x10aa18: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x10aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x10aa1c: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x10aa1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10aa20: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x10aa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x10aa24: 0x24150100  addiu       $s5, $zero, 0x100
    ctx->pc = 0x10aa24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10aa28: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x10aa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x10aa2c: 0x241401b7  addiu       $s4, $zero, 0x1B7
    ctx->pc = 0x10aa2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x10aa30: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x10aa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x10aa34: 0x241301b8  addiu       $s3, $zero, 0x1B8
    ctx->pc = 0x10aa34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x10aa38: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10aa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10aa3c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x10aa3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10aa40: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x10aa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x10aa44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10aa44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa48: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10aa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10aa4c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_10aa50:
    // 0x10aa50: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x10AA50u;
    {
        const bool branch_taken_0x10aa50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA50u;
        // 0x10aa54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa50) {
            ctx->pc = 0x10AB30u;
            goto label_10ab30;
        }
    }
    ctx->pc = 0x10AA58u;
    // 0x10aa58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa5c: 0xc042ada  jal         func_10AB68
    ctx->pc = 0x10AA5Cu;
    SET_GPR_U32(ctx, 31, 0x10AA64u);
    ctx->pc = 0x10AA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA5Cu;
    // 0x10aa60: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AB68u, 0x10AA5Cu, 0x10AA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA64u;
label_10aa64:
    // 0x10aa64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10AA64u;
    {
        const bool branch_taken_0x10aa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA64u;
        // 0x10aa68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa64) {
            ctx->pc = 0x10AA7Cu;
            goto label_10aa7c;
        }
    }
    ctx->pc = 0x10AA6Cu;
    // 0x10aa6c: 0x0  nop
    ctx->pc = 0x10aa6cu;
    // NOP
label_10aa70:
    // 0x10aa70: 0xc042a80  jal         func_10AA00
    ctx->pc = 0x10AA70u;
    SET_GPR_U32(ctx, 31, 0x10AA78u);
    ctx->pc = 0x10AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA70u;
    // 0x10aa74: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA00u, 0x10AA70u, 0x10AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA78u;
label_10aa78:
    // 0x10aa78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aa78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10aa7c:
    // 0x10aa7c: 0xc0421dc  jal         func_108770
    ctx->pc = 0x10AA7Cu;
    SET_GPR_U32(ctx, 31, 0x10AA84u);
    ctx->pc = 0x10AA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA7Cu;
    // 0x10aa80: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108770u, 0x10AA7Cu, 0x10AA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA84u;
label_10aa84:
    // 0x10aa84: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AA84u;
    {
        const bool branch_taken_0x10aa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x10AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA84u;
        // 0x10aa88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa84) {
            ctx->pc = 0x10AA98u;
            goto label_10aa98;
        }
    }
    ctx->pc = 0x10AA8Cu;
    // 0x10aa8c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x10aa90: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10AA90u;
    {
        const bool branch_taken_0x10aa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10aa90) {
            ctx->pc = 0x10AA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10aa70;
        }
    }
    ctx->pc = 0x10AA98u;
label_10aa98:
    // 0x10aa98: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10AA98u;
    SET_GPR_U32(ctx, 31, 0x10AAA0u);
    ctx->pc = 0x10AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA98u;
    // 0x10aa9c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10AA98u, 0x10AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAA0u;
label_10aaa0:
    // 0x10aaa0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10aaa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aaa4: 0x1077000d  beq         $v1, $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x10AAA4u;
    {
        const bool branch_taken_0x10aaa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x10AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAA4u;
        // 0x10aaa8: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aaa4) {
            ctx->pc = 0x10AADCu;
            goto label_10aadc;
        }
    }
    ctx->pc = 0x10AAACu;
    // 0x10aaac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AAACu;
    {
        const bool branch_taken_0x10aaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10aaac) {
            ctx->pc = 0x10AAC4u;
            goto label_10aac4;
        }
    }
    ctx->pc = 0x10AAB4u;
    // 0x10aab4: 0x10750011  beq         $v1, $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x10AAB4u;
    {
        const bool branch_taken_0x10aab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x10aab4) {
            ctx->pc = 0x10AAFCu;
            goto label_10aafc;
        }
    }
    ctx->pc = 0x10AABCu;
    // 0x10aabc: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x10AABCu;
    {
        const bool branch_taken_0x10aabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AABCu;
        // 0x10aac0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aabc) {
            ctx->pc = 0x10AA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10aa50;
        }
    }
    ctx->pc = 0x10AAC4u;
label_10aac4:
    // 0x10aac4: 0x1074001a  beq         $v1, $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x10AAC4u;
    {
        const bool branch_taken_0x10aac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x10AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAC4u;
        // 0x10aac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aac4) {
            ctx->pc = 0x10AB30u;
            goto label_10ab30;
        }
    }
    ctx->pc = 0x10AACCu;
    // 0x10aacc: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x10AACCu;
    {
        const bool branch_taken_0x10aacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x10aacc) {
            ctx->pc = 0x10AAECu;
            goto label_10aaec;
        }
    }
    ctx->pc = 0x10AAD4u;
    // 0x10aad4: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x10AAD4u;
    {
        const bool branch_taken_0x10aad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAD4u;
        // 0x10aad8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aad4) {
            ctx->pc = 0x10AA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10aa50;
        }
    }
    ctx->pc = 0x10AADCu;
label_10aadc:
    // 0x10aadc: 0xc0427c4  jal         func_109F10
    ctx->pc = 0x10AADCu;
    SET_GPR_U32(ctx, 31, 0x10AAE4u);
    ctx->pc = 0x10AAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AADCu;
    // 0x10aae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109F10u, 0x10AADCu, 0x10AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAE4u;
label_10aae4:
    // 0x10aae4: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x10AAE4u;
    {
        const bool branch_taken_0x10aae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAE4u;
        // 0x10aae8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aae4) {
            ctx->pc = 0x10AA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10aa50;
        }
    }
    ctx->pc = 0x10AAECu;
label_10aaec:
    // 0x10aaec: 0xc042870  jal         func_10A1C0
    ctx->pc = 0x10AAECu;
    SET_GPR_U32(ctx, 31, 0x10AAF4u);
    ctx->pc = 0x10AAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAECu;
    // 0x10aaf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A1C0u, 0x10AAECu, 0x10AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAF4u;
label_10aaf4:
    // 0x10aaf4: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x10AAF4u;
    {
        const bool branch_taken_0x10aaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAF4u;
        // 0x10aaf8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aaf4) {
            ctx->pc = 0x10AA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10aa50;
        }
    }
    ctx->pc = 0x10AAFCu;
label_10aafc:
    // 0x10aafc: 0xc042898  jal         func_10A260
    ctx->pc = 0x10AAFCu;
    SET_GPR_U32(ctx, 31, 0x10AB04u);
    ctx->pc = 0x10AB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAFCu;
    // 0x10ab00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A260u, 0x10AAFCu, 0x10AB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB04u;
label_10ab04:
    // 0x10ab04: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10ab04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x10ab08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10ab08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab0c: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x10ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x10ab10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10ab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10ab14: 0xc041186  jal         func_104618
    ctx->pc = 0x10AB14u;
    SET_GPR_U32(ctx, 31, 0x10AB1Cu);
    ctx->pc = 0x10AB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB14u;
    // 0x10ab18: 0xffb20008  sd          $s2, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104618u, 0x10AB14u, 0x10AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB1Cu;
label_10ab1c:
    // 0x10ab1c: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x10ab1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ab20: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x10ab20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ab24: 0xfe020840  sd          $v0, 0x840($s0)
    ctx->pc = 0x10ab24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2112), GPR_U64(ctx, 2));
    // 0x10ab28: 0xfe030838  sd          $v1, 0x838($s0)
    ctx->pc = 0x10ab28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2104), GPR_U64(ctx, 3));
    // 0x10ab2c: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x10ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_10ab30:
    // 0x10ab30: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x10ab30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10ab34: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x10ab34u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10ab38: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x10ab38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10ab3c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x10ab3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10ab40: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x10ab40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10ab44: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x10ab44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10ab48: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10ab48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10ab4c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10ab4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ab50: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10ab50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ab54: 0x3e00008  jr          $ra
    ctx->pc = 0x10AB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB54u;
        // 0x10ab58: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AB5Cu;
    // 0x10ab5c: 0x0  nop
    ctx->pc = 0x10ab5cu;
    // NOP
    ctx->pc = 0x10ab60u;
}
