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

// Function: sub_00362E40
// Address: 0x362e40 - 0x362fe0
void sub_00362E40_0x362e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362E40_0x362e40");
#endif

    switch (ctx->pc) {
        case 0x362eacu: goto label_362eac;
        case 0x362ee0u: goto label_362ee0;
        case 0x362ef8u: goto label_362ef8;
        case 0x362f18u: goto label_362f18;
        case 0x362f30u: goto label_362f30;
        case 0x362f40u: goto label_362f40;
        case 0x362f98u: goto label_362f98;
        case 0x362fb8u: goto label_362fb8;
        default: break;
    }

    ctx->pc = 0x362e40u;

    // 0x362e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x362e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x362e44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x362e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x362e48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x362e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x362e4c: 0x3c13001d  lui         $s3, 0x1D
    ctx->pc = 0x362e4cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)29 << 16));
    // 0x362e50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x362e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x362e54: 0x26625d10  addiu       $v0, $s3, 0x5D10
    ctx->pc = 0x362e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 23824));
    // 0x362e58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x362e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x362e5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x362e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x362e60: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x362e60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D5D14u));
    // 0x362e64: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x362e64u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x1D5D10u));
    // 0x362e68: 0x12230054  beq         $s1, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x362E68u;
    {
        const bool branch_taken_0x362e68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x362E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362E68u;
        // 0x362e6c: 0x3c128000  lui         $s2, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362e68) {
            ctx->pc = 0x362FBCu;
            goto label_362fbc;
        }
    }
    ctx->pc = 0x362E70u;
    // 0x362e70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x362e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x362e74: 0x2a220040  slti        $v0, $s1, 0x40
    ctx->pc = 0x362e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x362e78: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x362e78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x362e7c: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x362e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x362e80: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x362e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x362e84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x362e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x362e88: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x362e88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
    // 0x362e8c: 0x26105d28  addiu       $s0, $s0, 0x5D28
    ctx->pc = 0x362e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23848));
    // 0x362e90: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x362e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x362e94: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x362e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x362e98: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x362E98u;
    {
        const bool branch_taken_0x362e98 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x362e98) {
            ctx->pc = 0x362E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362E98u;
            // 0x362e9c: 0x96050014  lhu         $a1, 0x14($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362EB0u;
            goto label_362eb0;
        }
    }
    ctx->pc = 0x362EA0u;
    // 0x362ea0: 0x96040010  lhu         $a0, 0x10($s0)
    ctx->pc = 0x362ea0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x362ea4: 0xc0d7b86  jal         func_35EE18
    ctx->pc = 0x362EA4u;
    SET_GPR_U32(ctx, 31, 0x362EACu);
    ctx->pc = 0x362EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362EA4u;
    // 0x362ea8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EE18u, 0x362EA4u, 0x362EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362EACu;
label_362eac:
    // 0x362eac: 0x96050014  lhu         $a1, 0x14($s0)
    ctx->pc = 0x362eacu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_362eb0:
    // 0x362eb0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x362EB0u;
    {
        const bool branch_taken_0x362eb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x362EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362EB0u;
        // 0x362eb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362eb0) {
            ctx->pc = 0x362EC8u;
            goto label_362ec8;
        }
    }
    ctx->pc = 0x362EB8u;
    // 0x362eb8: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x362EB8u;
    {
        const bool branch_taken_0x362eb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x362EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362EB8u;
        // 0x362ebc: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362eb8) {
            ctx->pc = 0x362F00u;
            goto label_362f00;
        }
    }
    ctx->pc = 0x362EC0u;
    // 0x362ec0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x362EC0u;
    {
        const bool branch_taken_0x362ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362EC0u;
        // 0x362ec4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362ec0) {
            ctx->pc = 0x362F38u;
            goto label_362f38;
        }
    }
    ctx->pc = 0x362EC8u;
label_362ec8:
    // 0x362ec8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x362ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x362ecc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x362ECCu;
    {
        const bool branch_taken_0x362ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362ECCu;
        // 0x362ed0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362ecc) {
            ctx->pc = 0x362EE8u;
            goto label_362ee8;
        }
    }
    ctx->pc = 0x362ED4u;
    // 0x362ed4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x362ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x362ed8: 0xc0d8c76  jal         func_3631D8
    ctx->pc = 0x362ED8u;
    SET_GPR_U32(ctx, 31, 0x362EE0u);
    ctx->pc = 0x362EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362ED8u;
    // 0x362edc: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3631D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3631D8u, 0x362ED8u, 0x362EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362EE0u;
label_362ee0:
    // 0x362ee0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x362EE0u;
    {
        const bool branch_taken_0x362ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362EE0u;
        // 0x362ee4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362ee0) {
            ctx->pc = 0x362F40u;
            goto label_362f40;
        }
    }
    ctx->pc = 0x362EE8u;
label_362ee8:
    // 0x362ee8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x362ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x362eec: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x362eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x362ef0: 0xc0d8c22  jal         func_363088
    ctx->pc = 0x362EF0u;
    SET_GPR_U32(ctx, 31, 0x362EF8u);
    ctx->pc = 0x362EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362EF0u;
    // 0x362ef4: 0x8f87c804  lw          $a3, -0x37FC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363088u, 0x362EF0u, 0x362EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362EF8u;
label_362ef8:
    // 0x362ef8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x362EF8u;
    {
        const bool branch_taken_0x362ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362EF8u;
        // 0x362efc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362ef8) {
            ctx->pc = 0x362F40u;
            goto label_362f40;
        }
    }
    ctx->pc = 0x362F00u;
label_362f00:
    // 0x362f00: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x362f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x362f04: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x362F04u;
    {
        const bool branch_taken_0x362f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362F04u;
        // 0x362f08: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362f04) {
            ctx->pc = 0x362F20u;
            goto label_362f20;
        }
    }
    ctx->pc = 0x362F0Cu;
    // 0x362f0c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x362f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x362f10: 0xc0d8ce6  jal         func_363398
    ctx->pc = 0x362F10u;
    SET_GPR_U32(ctx, 31, 0x362F18u);
    ctx->pc = 0x362F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362F10u;
    // 0x362f14: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363398u, 0x362F10u, 0x362F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362F18u;
label_362f18:
    // 0x362f18: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x362F18u;
    {
        const bool branch_taken_0x362f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362F18u;
        // 0x362f1c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362f18) {
            ctx->pc = 0x362F40u;
            goto label_362f40;
        }
    }
    ctx->pc = 0x362F20u;
label_362f20:
    // 0x362f20: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x362f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x362f24: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x362f24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x362f28: 0xc0d8d3c  jal         func_3634F0
    ctx->pc = 0x362F28u;
    SET_GPR_U32(ctx, 31, 0x362F30u);
    ctx->pc = 0x362F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362F28u;
    // 0x362f2c: 0x8f87c804  lw          $a3, -0x37FC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3634F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3634F0u, 0x362F28u, 0x362F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362F30u;
label_362f30:
    // 0x362f30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x362F30u;
    {
        const bool branch_taken_0x362f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362F30u;
        // 0x362f34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362f30) {
            ctx->pc = 0x362F40u;
            goto label_362f40;
        }
    }
    ctx->pc = 0x362F38u;
label_362f38:
    // 0x362f38: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362F38u;
    SET_GPR_U32(ctx, 31, 0x362F40u);
    ctx->pc = 0x362F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362F38u;
    // 0x362f3c: 0x24847720  addiu       $a0, $a0, 0x7720 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362F38u, 0x362F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362F40u;
label_362f40:
    // 0x362f40: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x362f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x362f44: 0x26645d10  addiu       $a0, $s3, 0x5D10
    ctx->pc = 0x362f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 23824));
    // 0x362f48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x362f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362f4c: 0x1642001b  bne         $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x362F4Cu;
    {
        const bool branch_taken_0x362f4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x362F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362F4Cu;
        // 0x362f50: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362f4c) {
            ctx->pc = 0x362FBCu;
            goto label_362fbc;
        }
    }
    ctx->pc = 0x362F54u;
    // 0x362f54: 0x8f82c804  lw          $v0, -0x37FC($gp)
    ctx->pc = 0x362f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952964)));
    // 0x362f58: 0x8f87c800  lw          $a3, -0x3800($gp)
    ctx->pc = 0x362f58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952960)));
    // 0x362f5c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x362f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x362f60: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x362f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x362f64: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x362f64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x362f68: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x362F68u;
    {
        const bool branch_taken_0x362f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x362F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362F68u;
        // 0x362f6c: 0xac910000  sw          $s1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362f68) {
            ctx->pc = 0x362FA0u;
            goto label_362fa0;
        }
    }
    ctx->pc = 0x362F70u;
    // 0x362f70: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x362f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x362f74: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x362f74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x362f78: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x362F78u;
    {
        const bool branch_taken_0x362f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362F78u;
        // 0x362f7c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362f78) {
            ctx->pc = 0x362FA4u;
            goto label_362fa4;
        }
    }
    ctx->pc = 0x362F80u;
    // 0x362f80: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x362F80u;
    {
        const bool branch_taken_0x362f80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x362F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362F80u;
        // 0x362f84: 0xaf86c804  sw          $a2, -0x37FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952964), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362f80) {
            ctx->pc = 0x362FBCu;
            goto label_362fbc;
        }
    }
    ctx->pc = 0x362F88u;
    // 0x362f88: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x362f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x362f8c: 0x96040010  lhu         $a0, 0x10($s0)
    ctx->pc = 0x362f8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x362f90: 0xc0d7dea  jal         func_35F7A8
    ctx->pc = 0x362F90u;
    SET_GPR_U32(ctx, 31, 0x362F98u);
    ctx->pc = 0x362F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362F90u;
    // 0x362f94: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F7A8u, 0x362F90u, 0x362F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362F98u;
label_362f98:
    // 0x362f98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x362F98u;
    {
        const bool branch_taken_0x362f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362F98u;
        // 0x362f9c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362f98) {
            ctx->pc = 0x362FC0u;
            goto label_362fc0;
        }
    }
    ctx->pc = 0x362FA0u;
label_362fa0:
    // 0x362fa0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x362fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_362fa4:
    // 0x362fa4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x362FA4u;
    {
        const bool branch_taken_0x362fa4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x362FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362FA4u;
        // 0x362fa8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362fa4) {
            ctx->pc = 0x362FB8u;
            goto label_362fb8;
        }
    }
    ctx->pc = 0x362FACu;
    // 0x362fac: 0x96040010  lhu         $a0, 0x10($s0)
    ctx->pc = 0x362facu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x362fb0: 0xc0d7b86  jal         func_35EE18
    ctx->pc = 0x362FB0u;
    SET_GPR_U32(ctx, 31, 0x362FB8u);
    ctx->pc = 0x362FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362FB0u;
    // 0x362fb4: 0xaf86c804  sw          $a2, -0x37FC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952964), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EE18u, 0x362FB0u, 0x362FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362FB8u;
label_362fb8:
    // 0x362fb8: 0xaf80c804  sw          $zero, -0x37FC($gp)
    ctx->pc = 0x362fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952964), GPR_U32(ctx, 0));
label_362fbc:
    // 0x362fbc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x362fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_362fc0:
    // 0x362fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x362fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362fc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x362fc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362fc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x362fc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362fcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x362fccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362fd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x362fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x362FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362FD4u;
        // 0x362fd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362FDCu;
    // 0x362fdc: 0x0  nop
    ctx->pc = 0x362fdcu;
    // NOP
    ctx->pc = 0x362fe0u;
}
