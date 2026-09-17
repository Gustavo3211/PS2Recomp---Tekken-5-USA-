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

// Function: sub_00331F10
// Address: 0x331f10 - 0x332090
void sub_00331F10_0x331f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331F10_0x331f10");
#endif

    switch (ctx->pc) {
        case 0x331f48u: goto label_331f48;
        case 0x331f68u: goto label_331f68;
        case 0x331f88u: goto label_331f88;
        case 0x331fe0u: goto label_331fe0;
        default: break;
    }

    ctx->pc = 0x331f10u;

    // 0x331f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x331f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x331f14: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x331f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x331f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x331f1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x331f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x331f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x331f24: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x331f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x331f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x331f2c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x331f2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x331f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x331f34: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x331f34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f38: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x331f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x331f3c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x331f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x331f40: 0xc0d1570  jal         func_3455C0
    ctx->pc = 0x331F40u;
    SET_GPR_U32(ctx, 31, 0x331F48u);
    ctx->pc = 0x331F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331F40u;
    // 0x331f44: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3455C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3455C0u, 0x331F40u, 0x331F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331F48u;
label_331f48:
    // 0x331f48: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x331f48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f4c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x331f4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x331f50: 0xe723c  dsll32      $t6, $t6, 8
    ctx->pc = 0x331f50u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 8));
    // 0x331f54: 0xe723a  dsrl        $t6, $t6, 8
    ctx->pc = 0x331f54u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 8);
    // 0x331f58: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x331f58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x331f5c: 0x13c0c0  sll         $t8, $s3, 3
    ctx->pc = 0x331f5cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x331f60: 0x240d000e  addiu       $t5, $zero, 0xE
    ctx->pc = 0x331f60u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x331f64: 0x0  nop
    ctx->pc = 0x331f64u;
    // NOP
label_331f68:
    // 0x331f68: 0x2546021  addu        $t4, $s2, $s4
    ctx->pc = 0x331f68u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x331f6c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x331f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x331f70: 0xc183c  dsll32      $v1, $t4, 0
    ctx->pc = 0x331f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << (32 + 0));
    // 0x331f74: 0x2443a  dsrl        $t0, $v0, 16
    ctx->pc = 0x331f74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> 16);
    // 0x331f78: 0x3543a  dsrl        $t2, $v1, 16
    ctx->pc = 0x331f78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) >> 16);
    // 0x331f7c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x331f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x331f80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x331f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f84: 0x0  nop
    ctx->pc = 0x331f84u;
    // NOP
label_331f88:
    // 0x331f88: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x331f88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x331f8c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x331f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x331f90: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x331F90u;
    {
        const bool branch_taken_0x331f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331F90u;
        // 0x331f94: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331f90) {
            ctx->pc = 0x332040u;
            goto label_332040;
        }
    }
    ctx->pc = 0x331F98u;
    // 0x331f98: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x331f98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x331f9c: 0x94a3c  dsll32      $t1, $t1, 8
    ctx->pc = 0x331f9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 8));
    // 0x331fa0: 0x94a3a  dsrl        $t1, $t1, 8
    ctx->pc = 0x331fa0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 8);
    // 0x331fa4: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x331fa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x331fa8: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x331fa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x331fac: 0xa81025  or          $v0, $a1, $t0
    ctx->pc = 0x331facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x331fb0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x331fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x331fb4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x331fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x331fb8: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x331FB8u;
    {
        const bool branch_taken_0x331fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x331FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331FB8u;
        // 0x331fbc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331fb8) {
            ctx->pc = 0x33201Cu;
            goto label_33201c;
        }
    }
    ctx->pc = 0x331FC0u;
    // 0x331fc0: 0x91640000  lbu         $a0, 0x0($t3)
    ctx->pc = 0x331fc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x331fc4: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x331fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x331fc8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x331FC8u;
    {
        const bool branch_taken_0x331fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x331fc8) {
            ctx->pc = 0x331FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331FC8u;
            // 0x331fcc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331FE0u;
            goto label_331fe0;
        }
    }
    ctx->pc = 0x331FD0u;
    // 0x331fd0: 0xaa1025  or          $v0, $a1, $t2
    ctx->pc = 0x331fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x331fd4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x331FD4u;
    {
        const bool branch_taken_0x331fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331FD4u;
        // 0x331fd8: 0x491025  or          $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331fd4) {
            ctx->pc = 0x332014u;
            goto label_332014;
        }
    }
    ctx->pc = 0x331FDCu;
    // 0x331fdc: 0x0  nop
    ctx->pc = 0x331fdcu;
    // NOP
label_331fe0:
    // 0x331fe0: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x331fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x331fe4: 0xe41024  and         $v0, $a3, $a0
    ctx->pc = 0x331fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x331fe8: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x331fe8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x331fec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x331fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x331ff0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x331FF0u;
    {
        const bool branch_taken_0x331ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x331FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331FF0u;
        // 0x331ff4: 0x2338821  addu        $s1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331ff0) {
            ctx->pc = 0x33201Cu;
            goto label_33201c;
        }
    }
    ctx->pc = 0x331FF8u;
    // 0x331ff8: 0x0  nop
    ctx->pc = 0x331ff8u;
    // NOP
    // 0x331ffc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x331FFCu;
    {
        const bool branch_taken_0x331ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x331ffc) {
            ctx->pc = 0x332000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331FFCu;
            // 0x332000: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331fe0;
        }
    }
    ctx->pc = 0x332004u;
    // 0x332004: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x332004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x332008: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x332008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x33200c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x33200cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x332010: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x332010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_332014:
    // 0x332014: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x332014u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x332018: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x332018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_33201c:
    // 0x33201c: 0x54cf0009  bnel        $a2, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x33201Cu;
    {
        const bool branch_taken_0x33201c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 15));
        if (branch_taken_0x33201c) {
            ctx->pc = 0x332020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33201Cu;
            // 0x332020: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332044u;
            goto label_332044;
        }
    }
    ctx->pc = 0x332024u;
    // 0x332024: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x332024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x332028: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x332028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x33202c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x33202cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x332030: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x332030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x332034: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x332034u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x332038: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x332038u;
    {
        const bool branch_taken_0x332038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332038u;
        // 0x33203c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332038) {
            ctx->pc = 0x332054u;
            goto label_332054;
        }
    }
    ctx->pc = 0x332040u;
label_332040:
    // 0x332040: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x332040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_332044:
    // 0x332044: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x332044u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x332048: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x332048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x33204c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x33204Cu;
    {
        const bool branch_taken_0x33204c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x332050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33204Cu;
        // 0x332050: 0x73842  srl         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33204c) {
            ctx->pc = 0x331F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331f88;
        }
    }
    ctx->pc = 0x332054u;
label_332054:
    // 0x332054: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x332054u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x332058: 0x180902d  daddu       $s2, $t4, $zero
    ctx->pc = 0x332058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33205c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x33205cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x332060: 0x5a1ffc1  bgez        $t5, . + 4 + (-0x3F << 2)
    ctx->pc = 0x332060u;
    {
        const bool branch_taken_0x332060 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x332064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332060u;
        // 0x332064: 0x2388823  subu        $s1, $s1, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332060) {
            ctx->pc = 0x331F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331f68;
        }
    }
    ctx->pc = 0x332068u;
    // 0x332068: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x332068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33206c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33206cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332070: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x332070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x332074: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x332074u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332078: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x332078u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33207c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33207cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332080: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x332080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x332084: 0x3e00008  jr          $ra
    ctx->pc = 0x332084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332084u;
        // 0x332088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33208Cu;
    // 0x33208c: 0x0  nop
    ctx->pc = 0x33208cu;
    // NOP
    ctx->pc = 0x332090u;
}
