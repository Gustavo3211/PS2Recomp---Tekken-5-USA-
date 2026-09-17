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

// Function: sub_00320E20
// Address: 0x320e20 - 0x321030
void sub_00320E20_0x320e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320E20_0x320e20");
#endif

    switch (ctx->pc) {
        case 0x320f78u: goto label_320f78;
        case 0x320f80u: goto label_320f80;
        case 0x320fc4u: goto label_320fc4;
        case 0x320fccu: goto label_320fcc;
        case 0x320fd0u: goto label_320fd0;
        case 0x320fdcu: goto label_320fdc;
        default: break;
    }

    ctx->pc = 0x320e20u;

    // 0x320e20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x320e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x320e24: 0x3c090046  lui         $t1, 0x46
    ctx->pc = 0x320e24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)70 << 16));
    // 0x320e28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x320e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x320e2c: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x320e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x320e30: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x320e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x320e34: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x320e34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320e38: 0x3c0a0046  lui         $t2, 0x46
    ctx->pc = 0x320e38u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)70 << 16));
    // 0x320e3c: 0x3c0b0046  lui         $t3, 0x46
    ctx->pc = 0x320e3cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)70 << 16));
    // 0x320e40: 0x3c0d0046  lui         $t5, 0x46
    ctx->pc = 0x320e40u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)70 << 16));
    // 0x320e44: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x320e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x320e48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x320e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x320e4c: 0x26910a40  addiu       $s1, $s4, 0xA40
    ctx->pc = 0x320e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 2624));
    // 0x320e50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x320e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x320e54: 0x26920c80  addiu       $s2, $s4, 0xC80
    ctx->pc = 0x320e54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 3200));
    // 0x320e58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x320e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x320e5c: 0x26930a00  addiu       $s3, $s4, 0xA00
    ctx->pc = 0x320e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 2560));
    // 0x320e60: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x320e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x320e64: 0x26950080  addiu       $s5, $s4, 0x80
    ctx->pc = 0x320e64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x320e68: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x320e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x320e6c: 0x269e09c0  addiu       $fp, $s4, 0x9C0
    ctx->pc = 0x320e6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 2496));
    // 0x320e70: 0x24421bf8  addiu       $v0, $v0, 0x1BF8
    ctx->pc = 0x320e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7160));
    // 0x320e74: 0x268800cc  addiu       $t0, $s4, 0xCC
    ctx->pc = 0x320e74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 204));
    // 0x320e78: 0x268f0118  addiu       $t7, $s4, 0x118
    ctx->pc = 0x320e78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 280));
    // 0x320e7c: 0x26830094  addiu       $v1, $s4, 0x94
    ctx->pc = 0x320e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 148));
    // 0x320e80: 0x268400a8  addiu       $a0, $s4, 0xA8
    ctx->pc = 0x320e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 168));
    // 0x320e84: 0x268600e0  addiu       $a2, $s4, 0xE0
    ctx->pc = 0x320e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x320e88: 0x268700f4  addiu       $a3, $s4, 0xF4
    ctx->pc = 0x320e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 244));
    // 0x320e8c: 0x268c012c  addiu       $t4, $s4, 0x12C
    ctx->pc = 0x320e8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), 300));
    // 0x320e90: 0x268e0140  addiu       $t6, $s4, 0x140
    ctx->pc = 0x320e90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
    // 0x320e94: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x320e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x320e98: 0x25291ce8  addiu       $t1, $t1, 0x1CE8
    ctx->pc = 0x320e98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 7400));
    // 0x320e9c: 0x254a1c10  addiu       $t2, $t2, 0x1C10
    ctx->pc = 0x320e9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 7184));
    // 0x320ea0: 0x256b1a60  addiu       $t3, $t3, 0x1A60
    ctx->pc = 0x320ea0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 6752));
    // 0x320ea4: 0x25ad1b08  addiu       $t5, $t5, 0x1B08
    ctx->pc = 0x320ea4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 6920));
    // 0x320ea8: 0x26101be0  addiu       $s0, $s0, 0x1BE0
    ctx->pc = 0x320ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7136));
    // 0x320eac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x320eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x320eb0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x320eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x320eb4: 0x2417000f  addiu       $s7, $zero, 0xF
    ctx->pc = 0x320eb4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x320eb8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x320eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x320ebc: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x320ebcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320ec0: 0xae890000  sw          $t1, 0x0($s4)
    ctx->pc = 0x320ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 9));
    // 0x320ec4: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x320ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x320ec8: 0xae8b0000  sw          $t3, 0x0($s4)
    ctx->pc = 0x320ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 11));
    // 0x320ecc: 0xacad0000  sw          $t5, 0x0($a1)
    ctx->pc = 0x320eccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 13));
    // 0x320ed0: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x320ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x320ed4: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x320ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x320ed8: 0xaeb000ec  sw          $s0, 0xEC($s5)
    ctx->pc = 0x320ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 236), GPR_U32(ctx, 16));
    // 0x320edc: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x320edcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    // 0x320ee0: 0xaeb50000  sw          $s5, 0x0($s5)
    ctx->pc = 0x320ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 21));
    // 0x320ee4: 0xaeb50004  sw          $s5, 0x4($s5)
    ctx->pc = 0x320ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 21));
    // 0x320ee8: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x320ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x320eec: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x320eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x320ef0: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x320ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
    // 0x320ef4: 0xac840004  sw          $a0, 0x4($a0)
    ctx->pc = 0x320ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
    // 0x320ef8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x320ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x320efc: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x320efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x320f00: 0xaea0003c  sw          $zero, 0x3C($s5)
    ctx->pc = 0x320f00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 0));
    // 0x320f04: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x320f04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
    // 0x320f08: 0xad080000  sw          $t0, 0x0($t0)
    ctx->pc = 0x320f08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 8));
    // 0x320f0c: 0xad080004  sw          $t0, 0x4($t0)
    ctx->pc = 0x320f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 8));
    // 0x320f10: 0xacc60004  sw          $a2, 0x4($a2)
    ctx->pc = 0x320f10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 6));
    // 0x320f14: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x320f14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x320f18: 0xacc60000  sw          $a2, 0x0($a2)
    ctx->pc = 0x320f18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 6));
    // 0x320f1c: 0xace70004  sw          $a3, 0x4($a3)
    ctx->pc = 0x320f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 7));
    // 0x320f20: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x320f20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x320f24: 0xace70000  sw          $a3, 0x0($a3)
    ctx->pc = 0x320f24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 7));
    // 0x320f28: 0xad00003c  sw          $zero, 0x3C($t0)
    ctx->pc = 0x320f28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 0));
    // 0x320f2c: 0xade20010  sw          $v0, 0x10($t7)
    ctx->pc = 0x320f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 2));
    // 0x320f30: 0xadef0000  sw          $t7, 0x0($t7)
    ctx->pc = 0x320f30u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 15));
    // 0x320f34: 0xadef0004  sw          $t7, 0x4($t7)
    ctx->pc = 0x320f34u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 15));
    // 0x320f38: 0xad8c0004  sw          $t4, 0x4($t4)
    ctx->pc = 0x320f38u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 12));
    // 0x320f3c: 0xad820010  sw          $v0, 0x10($t4)
    ctx->pc = 0x320f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 2));
    // 0x320f40: 0xad8c0000  sw          $t4, 0x0($t4)
    ctx->pc = 0x320f40u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 12));
    // 0x320f44: 0xadc20010  sw          $v0, 0x10($t6)
    ctx->pc = 0x320f44u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 2));
    // 0x320f48: 0xadce0004  sw          $t6, 0x4($t6)
    ctx->pc = 0x320f48u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 14));
    // 0x320f4c: 0xadce0000  sw          $t6, 0x0($t6)
    ctx->pc = 0x320f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 14));
    // 0x320f50: 0xade0003c  sw          $zero, 0x3C($t7)
    ctx->pc = 0x320f50u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 60), GPR_U32(ctx, 0));
    // 0x320f54: 0xafd20018  sw          $s2, 0x18($fp)
    ctx->pc = 0x320f54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 18));
    // 0x320f58: 0xafd3001c  sw          $s3, 0x1C($fp)
    ctx->pc = 0x320f58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 19));
    // 0x320f5c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x320f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x320f60: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x320f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x320f64: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x320f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x320f68: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x320f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x320f6c: 0xae720240  sw          $s2, 0x240($s3)
    ctx->pc = 0x320f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 576), GPR_U32(ctx, 18));
    // 0x320f70: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x320f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320f74: 0x0  nop
    ctx->pc = 0x320f74u;
    // NOP
label_320f78:
    // 0x320f78: 0xc0c778a  jal         func_31DE28
    ctx->pc = 0x320F78u;
    SET_GPR_U32(ctx, 31, 0x320F80u);
    ctx->pc = 0x320F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320F78u;
    // 0x320f7c: 0x26d60060  addiu       $s6, $s6, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE28u, 0x320F78u, 0x320F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320F80u;
label_320f80:
    // 0x320f80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x320f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320f84: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x320f84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x320f88: 0x16e2fffb  bne         $s7, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x320F88u;
    {
        const bool branch_taken_0x320f88 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x320F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F88u;
        // 0x320f8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320f88) {
            ctx->pc = 0x320F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320f78;
        }
    }
    ctx->pc = 0x320F90u;
    // 0x320f90: 0x26831300  addiu       $v1, $s4, 0x1300
    ctx->pc = 0x320f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4864));
    // 0x320f94: 0x268212c0  addiu       $v0, $s4, 0x12C0
    ctx->pc = 0x320f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4800));
    // 0x320f98: 0x26931280  addiu       $s3, $s4, 0x1280
    ctx->pc = 0x320f98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4736));
    // 0x320f9c: 0x26841500  addiu       $a0, $s4, 0x1500
    ctx->pc = 0x320f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 5376));
    // 0x320fa0: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x320fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x320fa4: 0x26921580  addiu       $s2, $s4, 0x1580
    ctx->pc = 0x320fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 5504));
    // 0x320fa8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x320fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x320fac: 0x26900c80  addiu       $s0, $s4, 0xC80
    ctx->pc = 0x320facu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3200));
    // 0x320fb0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x320fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x320fb4: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x320fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x320fb8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x320fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x320fbc: 0xc0cf83a  jal         func_33E0E8
    ctx->pc = 0x320FBCu;
    SET_GPR_U32(ctx, 31, 0x320FC4u);
    ctx->pc = 0x320FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320FBCu;
    // 0x320fc0: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E0E8u, 0x320FBCu, 0x320FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320FC4u;
label_320fc4:
    // 0x320fc4: 0xc0cf86a  jal         func_33E1A8
    ctx->pc = 0x320FC4u;
    SET_GPR_U32(ctx, 31, 0x320FCCu);
    ctx->pc = 0x320FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320FC4u;
    // 0x320fc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E1A8u, 0x320FC4u, 0x320FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320FCCu;
label_320fcc:
    // 0x320fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_320fd0:
    // 0x320fd0: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x320fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x320fd4: 0xc0cf83a  jal         func_33E0E8
    ctx->pc = 0x320FD4u;
    SET_GPR_U32(ctx, 31, 0x320FDCu);
    ctx->pc = 0x320FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320FD4u;
    // 0x320fd8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E0E8u, 0x320FD4u, 0x320FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320FDCu;
label_320fdc:
    // 0x320fdc: 0x621fffc  bgez        $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x320FDCu;
    {
        const bool branch_taken_0x320fdc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x320FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FDCu;
        // 0x320fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320fdc) {
            ctx->pc = 0x320FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320fd0;
        }
    }
    ctx->pc = 0x320FE4u;
    // 0x320fe4: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x320fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x320fe8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x320fe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320fec: 0xaf92ccdc  sw          $s2, -0x3324($gp)
    ctx->pc = 0x320fecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954204), GPR_U32(ctx, 18));
    // 0x320ff0: 0xaf9ecce0  sw          $fp, -0x3320($gp)
    ctx->pc = 0x320ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954208), GPR_U32(ctx, 30));
    // 0x320ff4: 0xaf93cccc  sw          $s3, -0x3334($gp)
    ctx->pc = 0x320ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954188), GPR_U32(ctx, 19));
    // 0x320ff8: 0xaf95ccd4  sw          $s5, -0x332C($gp)
    ctx->pc = 0x320ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954196), GPR_U32(ctx, 21));
    // 0x320ffc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x320ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321000: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x321000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x321004: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x321004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321008: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x321008u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32100c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x32100cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x321010: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x321010u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321014: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x321014u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x321018: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x321018u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32101c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x32101cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x321020: 0xaf82ccd8  sw          $v0, -0x3328($gp)
    ctx->pc = 0x321020u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954200), GPR_U32(ctx, 2));
    // 0x321024: 0x3e00008  jr          $ra
    ctx->pc = 0x321024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321024u;
        // 0x321028: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32102Cu;
    // 0x32102c: 0x0  nop
    ctx->pc = 0x32102cu;
    // NOP
    ctx->pc = 0x321030u;
}
