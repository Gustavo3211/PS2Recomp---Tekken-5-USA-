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

// Function: sub_00506EE8
// Address: 0x506ee8 - 0x507080
void sub_00506EE8_0x506ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00506EE8_0x506ee8");
#endif

    switch (ctx->pc) {
        case 0x506f18u: goto label_506f18;
        case 0x506f88u: goto label_506f88;
        case 0x507014u: goto label_507014;
        default: break;
    }

    ctx->pc = 0x506ee8u;

    // 0x506ee8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x506ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x506eec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x506eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x506ef0: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x506ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x506ef4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x506ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x506ef8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x506ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x506efc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x506efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x506f00: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x506f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x506f04: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x506f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x506f08: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x506f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x506f0c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x506f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x506f10: 0xc144ab8  jal         func_512AE0
    ctx->pc = 0x506F10u;
    SET_GPR_U32(ctx, 31, 0x506F18u);
    ctx->pc = 0x506F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x506F10u;
    // 0x506f14: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AE0u, 0x506F10u, 0x506F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506F18u;
label_506f18:
    // 0x506f18: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x506f18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506f1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x506f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506f20: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x506f20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x506f24: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x506f24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x506f28: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x506f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x506f2c: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x506f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x506f30: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x506F30u;
    {
        const bool branch_taken_0x506f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x506F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506F30u;
        // 0x506f34: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x506f30) {
            ctx->pc = 0x50705Cu;
            goto label_50705c;
        }
    }
    ctx->pc = 0x506F38u;
    // 0x506f38: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x506f38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x506f3c: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x506f3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x506f40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x506f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x506f44: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x506f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x506f48: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x506f48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x506f4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x506f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x506f50: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x506f50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x506f54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x506f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x506f58: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x506f58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x506f5c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x506f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x506f60: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x506f60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x506f64: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x506f64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x506f68: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x506f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x506f6c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x506f6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x506f70: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x506f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x506f74: 0x85220002  lh          $v0, 0x2($t1)
    ctx->pc = 0x506f74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x506f78: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x506f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x506f7c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x506f7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x506f80: 0xc1413da  jal         func_504F68
    ctx->pc = 0x506F80u;
    SET_GPR_U32(ctx, 31, 0x506F88u);
    ctx->pc = 0x506F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x506F80u;
    // 0x506f84: 0xafa80008  sw          $t0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504F68u, 0x506F80u, 0x506F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506F88u;
label_506f88:
    // 0x506f88: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x506f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x506f8c: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x506f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x506f90: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x506F90u;
    {
        const bool branch_taken_0x506f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x506F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506F90u;
        // 0x506f94: 0x2468f080  addiu       $t0, $v1, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506f90) {
            ctx->pc = 0x50705Cu;
            goto label_50705c;
        }
    }
    ctx->pc = 0x506F98u;
    // 0x506f98: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x506f98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x506f9c: 0x25140054  addiu       $s4, $t0, 0x54
    ctx->pc = 0x506f9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), 84));
    // 0x506fa0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x506fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x506fa4: 0x25120050  addiu       $s2, $t0, 0x50
    ctx->pc = 0x506fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x506fa8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x506fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x506fac: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x506facu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x506fb0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x506fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x506fb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x506fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x506fb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x506fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x506fbc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x506fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x506fc0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x506fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x506fc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x506fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x506fc8: 0x24a50176  addiu       $a1, $a1, 0x176
    ctx->pc = 0x506fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 374));
    // 0x506fcc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x506fccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x506fd0: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x506fd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x506fd4: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x506fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x506fd8: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x506fd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x506fdc: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x506fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x506fe0: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x506fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x506fe4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x506fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x506fe8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x506fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x506fec: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x506fecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x506ff0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x506ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x506ff4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x506ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x506ff8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x506ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506ffc: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x506ffcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507000: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x507000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x507004: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x507004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x507008: 0xa5074e14  sh          $a3, 0x4E14($t0)
    ctx->pc = 0x507008u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 19988), (uint16_t)GPR_U32(ctx, 7));
    // 0x50700c: 0xc14481c  jal         func_512070
    ctx->pc = 0x50700Cu;
    SET_GPR_U32(ctx, 31, 0x507014u);
    ctx->pc = 0x507010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50700Cu;
    // 0x507010: 0xa5024e16  sh          $v0, 0x4E16($t0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 8), 19990), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x50700Cu, 0x507014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507014u;
label_507014:
    // 0x507014: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x507014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x507018: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x507018u;
    {
        const bool branch_taken_0x507018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x50701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507018u;
        // 0x50701c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507018) {
            ctx->pc = 0x507050u;
            goto label_507050;
        }
    }
    ctx->pc = 0x507020u;
    // 0x507020: 0xa6130000  sh          $s3, 0x0($s0)
    ctx->pc = 0x507020u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x507024: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x507024u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x507028: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x507028u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50702c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x50702cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x507030: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x507030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x507034: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x507034u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x507038: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x507038u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x50703c: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x50703cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x507040: 0xa604000c  sh          $a0, 0xC($s0)
    ctx->pc = 0x507040u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x507044: 0xa604000a  sh          $a0, 0xA($s0)
    ctx->pc = 0x507044u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x507048: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x507048u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x50704c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x50704cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_507050:
    // 0x507050: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x507050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x507054: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x507054u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
    // 0x507058: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x507058u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_50705c:
    // 0x50705c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x50705cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x507060: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x507060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x507064: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x507064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x507068: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x507068u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50706c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x50706cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x507070: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x507070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x507074: 0x3e00008  jr          $ra
    ctx->pc = 0x507074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507074u;
        // 0x507078: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x507074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50707Cu;
    // 0x50707c: 0x0  nop
    ctx->pc = 0x50707cu;
    // NOP
    ctx->pc = 0x507080u;
}
