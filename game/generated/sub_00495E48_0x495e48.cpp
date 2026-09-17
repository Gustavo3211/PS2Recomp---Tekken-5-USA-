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

// Function: sub_00495E48
// Address: 0x495e48 - 0x496100
void sub_00495E48_0x495e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00495E48_0x495e48");
#endif

    switch (ctx->pc) {
        case 0x495e90u: goto label_495e90;
        case 0x495ea0u: goto label_495ea0;
        case 0x495f70u: goto label_495f70;
        case 0x496068u: goto label_496068;
        case 0x496070u: goto label_496070;
        case 0x4960a8u: goto label_4960a8;
        default: break;
    }

    ctx->pc = 0x495e48u;

    // 0x495e48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x495e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x495e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x495e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x495e50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x495e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495e54: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x495e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x495e58: 0x261601b6  addiu       $s6, $s0, 0x1B6
    ctx->pc = 0x495e58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 438));
    // 0x495e5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x495e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x495e60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x495e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x495e64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x495e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x495e68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x495e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x495e6c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x495e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x495e70: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x495e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x495e74: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x495e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x495e78: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x495e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x495e7c: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x495e7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x495e80: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x495E80u;
    {
        const bool branch_taken_0x495e80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x495e80) {
            ctx->pc = 0x495E98u;
            goto label_495e98;
        }
    }
    ctx->pc = 0x495E88u;
    // 0x495e88: 0xc125702  jal         func_495C08
    ctx->pc = 0x495E88u;
    SET_GPR_U32(ctx, 31, 0x495E90u);
    ctx->pc = 0x495C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495C08u, 0x495E88u, 0x495E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495E90u;
label_495e90:
    // 0x495e90: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x495E90u;
    {
        const bool branch_taken_0x495e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495E90u;
        // 0x495e94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495e90) {
            ctx->pc = 0x4960CCu;
            goto label_4960cc;
        }
    }
    ctx->pc = 0x495E98u;
label_495e98:
    // 0x495e98: 0xc12553e  jal         func_4954F8
    ctx->pc = 0x495E98u;
    SET_GPR_U32(ctx, 31, 0x495EA0u);
    ctx->pc = 0x495E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495E98u;
    // 0x495e9c: 0x261501b8  addiu       $s5, $s0, 0x1B8 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4954F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4954F8u, 0x495E98u, 0x495EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495EA0u;
label_495ea0:
    // 0x495ea0: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x495ea0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x495ea4: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x495ea4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x495ea8: 0x10570081  beq         $v0, $s7, . + 4 + (0x81 << 2)
    ctx->pc = 0x495EA8u;
    {
        const bool branch_taken_0x495ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x495EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495EA8u;
        // 0x495eac: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495ea8) {
            ctx->pc = 0x4960B0u;
            goto label_4960b0;
        }
    }
    ctx->pc = 0x495EB0u;
    // 0x495eb0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x495eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x495eb4: 0x24520ab0  addiu       $s2, $v0, 0xAB0
    ctx->pc = 0x495eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2736));
    // 0x495eb8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x495eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x495ebc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x495ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x495ec0: 0x34630064  ori         $v1, $v1, 0x64
    ctx->pc = 0x495ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x495ec4: 0x24510ab4  addiu       $s1, $v0, 0xAB4
    ctx->pc = 0x495ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2740));
    // 0x495ec8: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x495ec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x495ecc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x495eccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0AB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AB4u, _value); } while (0);
    // 0x495ed0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x495ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x495ed4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x495ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x495ed8: 0x9204015b  lbu         $a0, 0x15B($s0)
    ctx->pc = 0x495ed8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 347)));
    // 0x495edc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x495edcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x495ee0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x495ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x495ee4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x495ee4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x495ee8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x495ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x495eec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x495EECu;
    {
        const bool branch_taken_0x495eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x495EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495EECu;
        // 0x495ef0: 0x3c13ffff  lui         $s3, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495eec) {
            ctx->pc = 0x495EFCu;
            goto label_495efc;
        }
    }
    ctx->pc = 0x495EF4u;
    // 0x495ef4: 0x30a20064  andi        $v0, $a1, 0x64
    ctx->pc = 0x495ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)100);
    // 0x495ef8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x495ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_495efc:
    // 0x495efc: 0x3c1e0073  lui         $fp, 0x73
    ctx->pc = 0x495efcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)115 << 16));
    // 0x495f00: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x495f00u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x495f04: 0x27d4d680  addiu       $s4, $fp, -0x2980
    ctx->pc = 0x495f04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956672));
    // 0x495f08: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x495f08u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x495f0c: 0x8e832494  lw          $v1, 0x2494($s4)
    ctx->pc = 0x495f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x72FB14u));
    // 0x495f10: 0x254a0abc  addiu       $t2, $t2, 0xABC
    ctx->pc = 0x495f10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2748));
    // 0x495f14: 0x8e82249c  lw          $v0, 0x249C($s4)
    ctx->pc = 0x495f14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x72FB1Cu));
    // 0x495f18: 0x256b0ac4  addiu       $t3, $t3, 0xAC4
    ctx->pc = 0x495f18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2756));
    // 0x495f1c: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x495f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0ABCu));
    // 0x495f20: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x495f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x495f24: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x495f24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x495f28: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x495f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x495f2c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x495f2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x495f30: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x495f30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x495f34: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x495f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x495f38: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x495f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x495f3c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x495f3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x495f40: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x495f40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x495f44: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x495f44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x495f48: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x495f48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x495f4c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x495f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x495f50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x495f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x495f54: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x495f54u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x495f58: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x495f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495f5c: 0xac400ac0  sw          $zero, 0xAC0($v0)
    ctx->pc = 0x495f5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0AC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AC0u, _value); } while (0);
    // 0x495f60: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x495f60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495f64: 0xad690000  sw          $t1, 0x0($t3)
    ctx->pc = 0x495f64u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
    // 0x495f68: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x495F68u;
    SET_GPR_U32(ctx, 31, 0x495F70u);
    ctx->pc = 0x495F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495F68u;
    // 0x495f6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x495F68u, 0x495F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495F70u;
label_495f70:
    // 0x495f70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x495f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x495f74: 0x1443003c  bne         $v0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x495F74u;
    {
        const bool branch_taken_0x495f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x495F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495F74u;
        // 0x495f78: 0x260701ba  addiu       $a3, $s0, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495f74) {
            ctx->pc = 0x496068u;
            goto label_496068;
        }
    }
    ctx->pc = 0x495F7Cu;
    // 0x495f7c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x495f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x495f80: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x495f80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x495f84: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x495f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x495f88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x495f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x495f8c: 0x8e862308  lw          $a2, 0x2308($s4)
    ctx->pc = 0x495f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8968)));
    // 0x495f90: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x495f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x495f94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x495f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x495f98: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x495f98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x495f9c: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x495f9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x495fa0: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x495fa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x495fa4: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x495fa4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x495fa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x495fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x495fac: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x495facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x495fb0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x495fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x495fb4: 0x2012  mflo        $a0
    ctx->pc = 0x495fb4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x495fb8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x495fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x495fbc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x495fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x495fc0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x495fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x495fc4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x495fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x495fc8: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x495fc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x495fcc: 0x460002a  bltz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x495FCCu;
    {
        const bool branch_taken_0x495fcc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x495FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495FCCu;
        // 0x495fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495fcc) {
            ctx->pc = 0x496078u;
            goto label_496078;
        }
    }
    ctx->pc = 0x495FD4u;
    // 0x495fd4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x495fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x495fd8: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x495fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x495fdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x495fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x495fe0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x495fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x495fe4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x495fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x495fe8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x495fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x495fec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x495fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x495ff0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x495ff0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x495ff4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x495ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x495ff8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x495ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x495ffc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x495ffcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x496000: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x496000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x496004: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x496008: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x496008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x49600c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49600cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496010: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x496010u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x496014: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x496014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x496018: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x496018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x49601c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49601cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x496020: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x496020u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x496024: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x496024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x496028: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49602c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49602cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x496030: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x496030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x496034: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x496034u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x496038: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x496038u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x49603c: 0xa603011a  sh          $v1, 0x11A($s0)
    ctx->pc = 0x49603cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 282), (uint16_t)GPR_U32(ctx, 3));
    // 0x496040: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x496040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x496044: 0xa602011e  sh          $v0, 0x11E($s0)
    ctx->pc = 0x496044u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 286), (uint16_t)GPR_U32(ctx, 2));
    // 0x496048: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x496048u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x49604c: 0xa6030122  sh          $v1, 0x122($s0)
    ctx->pc = 0x49604cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x496050: 0x94c50008  lhu         $a1, 0x8($a2)
    ctx->pc = 0x496050u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x496054: 0xa605015c  sh          $a1, 0x15C($s0)
    ctx->pc = 0x496054u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 5));
    // 0x496058: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x496058u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49605c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x49605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x496060: 0xc12557c  jal         func_4955F0
    ctx->pc = 0x496060u;
    SET_GPR_U32(ctx, 31, 0x496068u);
    ctx->pc = 0x496064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496060u;
    // 0x496064: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4955F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4955F0u, 0x496060u, 0x496068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496068u;
label_496068:
    // 0x496068: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x496068u;
    SET_GPR_U32(ctx, 31, 0x496070u);
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x496068u, 0x496070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496070u;
label_496070:
    // 0x496070: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x496070u;
    {
        const bool branch_taken_0x496070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496070u;
        // 0x496074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496070) {
            ctx->pc = 0x4960CCu;
            goto label_4960cc;
        }
    }
    ctx->pc = 0x496078u;
label_496078:
    // 0x496078: 0xa6b70000  sh          $s7, 0x0($s5)
    ctx->pc = 0x496078u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 23));
    // 0x49607c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x49607cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x496080: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x496080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x496084: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x496084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x496088: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49608c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49608cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x496090: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x496090u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x496094: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x496094u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x496098: 0x50570007  beql        $v0, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x496098u;
    {
        const bool branch_taken_0x496098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x496098) {
            ctx->pc = 0x49609Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x496098u;
            // 0x49609c: 0x96050118  lhu         $a1, 0x118($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4960B8u;
            goto label_4960b8;
        }
    }
    ctx->pc = 0x4960A0u;
    // 0x4960a0: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4960A0u;
    SET_GPR_U32(ctx, 31, 0x4960A8u);
    ctx->pc = 0x4960A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4960A0u;
    // 0x4960a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4960A0u, 0x4960A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4960A8u;
label_4960a8:
    // 0x4960a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4960A8u;
    {
        const bool branch_taken_0x4960a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4960ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4960A8u;
        // 0x4960ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4960a8) {
            ctx->pc = 0x4960CCu;
            goto label_4960cc;
        }
    }
    ctx->pc = 0x4960B0u;
label_4960b0:
    // 0x4960b0: 0x3c1e0073  lui         $fp, 0x73
    ctx->pc = 0x4960b0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)115 << 16));
    // 0x4960b4: 0x96050118  lhu         $a1, 0x118($s0)
    ctx->pc = 0x4960b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
label_4960b8:
    // 0x4960b8: 0x27c4d680  addiu       $a0, $fp, -0x2980
    ctx->pc = 0x4960b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956672));
    // 0x4960bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4960bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4960c0: 0xa48524a0  sh          $a1, 0x24A0($a0)
    ctx->pc = 0x4960c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9376), (uint16_t)GPR_U32(ctx, 5));
    // 0x4960c4: 0x9603011c  lhu         $v1, 0x11C($s0)
    ctx->pc = 0x4960c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x4960c8: 0xa48324a2  sh          $v1, 0x24A2($a0)
    ctx->pc = 0x4960c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9378), (uint16_t)GPR_U32(ctx, 3));
label_4960cc:
    // 0x4960cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4960ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4960d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4960d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4960d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4960d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4960d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4960d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4960dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4960dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4960e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4960e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4960e4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4960e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4960e8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4960e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4960ec: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4960ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4960f0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4960f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4960f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4960F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4960F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4960F4u;
        // 0x4960f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4960F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4960FCu;
    // 0x4960fc: 0x0  nop
    ctx->pc = 0x4960fcu;
    // NOP
    ctx->pc = 0x496100u;
}
