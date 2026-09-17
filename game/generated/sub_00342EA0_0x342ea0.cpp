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

// Function: sub_00342EA0
// Address: 0x342ea0 - 0x343040
void sub_00342EA0_0x342ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342EA0_0x342ea0");
#endif

    switch (ctx->pc) {
        case 0x342ea0u: goto label_342ea0;
        case 0x342ea4u: goto label_342ea4;
        case 0x342ea8u: goto label_342ea8;
        case 0x342eacu: goto label_342eac;
        case 0x342eb0u: goto label_342eb0;
        case 0x342eb4u: goto label_342eb4;
        case 0x342eb8u: goto label_342eb8;
        case 0x342ebcu: goto label_342ebc;
        case 0x342ec0u: goto label_342ec0;
        case 0x342ec4u: goto label_342ec4;
        case 0x342ec8u: goto label_342ec8;
        case 0x342eccu: goto label_342ecc;
        case 0x342ed0u: goto label_342ed0;
        case 0x342ed4u: goto label_342ed4;
        case 0x342ed8u: goto label_342ed8;
        case 0x342edcu: goto label_342edc;
        case 0x342ee0u: goto label_342ee0;
        case 0x342ee4u: goto label_342ee4;
        case 0x342ee8u: goto label_342ee8;
        case 0x342eecu: goto label_342eec;
        case 0x342ef0u: goto label_342ef0;
        case 0x342ef4u: goto label_342ef4;
        case 0x342ef8u: goto label_342ef8;
        case 0x342efcu: goto label_342efc;
        case 0x342f00u: goto label_342f00;
        case 0x342f04u: goto label_342f04;
        case 0x342f08u: goto label_342f08;
        case 0x342f0cu: goto label_342f0c;
        case 0x342f10u: goto label_342f10;
        case 0x342f14u: goto label_342f14;
        case 0x342f18u: goto label_342f18;
        case 0x342f1cu: goto label_342f1c;
        case 0x342f20u: goto label_342f20;
        case 0x342f24u: goto label_342f24;
        case 0x342f28u: goto label_342f28;
        case 0x342f2cu: goto label_342f2c;
        case 0x342f30u: goto label_342f30;
        case 0x342f34u: goto label_342f34;
        case 0x342f38u: goto label_342f38;
        case 0x342f3cu: goto label_342f3c;
        case 0x342f40u: goto label_342f40;
        case 0x342f44u: goto label_342f44;
        case 0x342f48u: goto label_342f48;
        case 0x342f4cu: goto label_342f4c;
        case 0x342f50u: goto label_342f50;
        case 0x342f54u: goto label_342f54;
        case 0x342f58u: goto label_342f58;
        case 0x342f5cu: goto label_342f5c;
        case 0x342f60u: goto label_342f60;
        case 0x342f64u: goto label_342f64;
        case 0x342f68u: goto label_342f68;
        case 0x342f6cu: goto label_342f6c;
        case 0x342f70u: goto label_342f70;
        case 0x342f74u: goto label_342f74;
        case 0x342f78u: goto label_342f78;
        case 0x342f7cu: goto label_342f7c;
        case 0x342f80u: goto label_342f80;
        case 0x342f84u: goto label_342f84;
        case 0x342f88u: goto label_342f88;
        case 0x342f8cu: goto label_342f8c;
        case 0x342f90u: goto label_342f90;
        case 0x342f94u: goto label_342f94;
        case 0x342f98u: goto label_342f98;
        case 0x342f9cu: goto label_342f9c;
        case 0x342fa0u: goto label_342fa0;
        case 0x342fa4u: goto label_342fa4;
        case 0x342fa8u: goto label_342fa8;
        case 0x342facu: goto label_342fac;
        case 0x342fb0u: goto label_342fb0;
        case 0x342fb4u: goto label_342fb4;
        case 0x342fb8u: goto label_342fb8;
        case 0x342fbcu: goto label_342fbc;
        case 0x342fc0u: goto label_342fc0;
        case 0x342fc4u: goto label_342fc4;
        case 0x342fc8u: goto label_342fc8;
        case 0x342fccu: goto label_342fcc;
        case 0x342fd0u: goto label_342fd0;
        case 0x342fd4u: goto label_342fd4;
        case 0x342fd8u: goto label_342fd8;
        case 0x342fdcu: goto label_342fdc;
        case 0x342fe0u: goto label_342fe0;
        case 0x342fe4u: goto label_342fe4;
        case 0x342fe8u: goto label_342fe8;
        case 0x342fecu: goto label_342fec;
        case 0x342ff0u: goto label_342ff0;
        case 0x342ff4u: goto label_342ff4;
        case 0x342ff8u: goto label_342ff8;
        case 0x342ffcu: goto label_342ffc;
        case 0x343000u: goto label_343000;
        case 0x343004u: goto label_343004;
        case 0x343008u: goto label_343008;
        case 0x34300cu: goto label_34300c;
        case 0x343010u: goto label_343010;
        case 0x343014u: goto label_343014;
        case 0x343018u: goto label_343018;
        case 0x34301cu: goto label_34301c;
        case 0x343020u: goto label_343020;
        case 0x343024u: goto label_343024;
        case 0x343028u: goto label_343028;
        case 0x34302cu: goto label_34302c;
        case 0x343030u: goto label_343030;
        case 0x343034u: goto label_343034;
        case 0x343038u: goto label_343038;
        case 0x34303cu: goto label_34303c;
        default: break;
    }

    ctx->pc = 0x342ea0u;

label_342ea0:
    // 0x342ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x342ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_342ea4:
    // 0x342ea4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x342ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_342ea8:
    // 0x342ea8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x342ea8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_342eac:
    // 0x342eac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x342eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_342eb0:
    // 0x342eb0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x342eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_342eb4:
    // 0x342eb4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x342eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_342eb8:
    // 0x342eb8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x342eb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_342ebc:
    // 0x342ebc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x342ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_342ec0:
    // 0x342ec0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x342ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_342ec4:
    // 0x342ec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x342ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_342ec8:
    // 0x342ec8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x342ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_342ecc:
    // 0x342ecc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x342eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_342ed0:
    // 0x342ed0: 0xc0d0c96  jal         func_343258
label_342ed4:
    if (ctx->pc == 0x342ED4u) {
        ctx->pc = 0x342ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342ED0u;
        // 0x342ed4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342ED8u;
        goto label_342ed8;
    }
    ctx->pc = 0x342ED0u;
    SET_GPR_U32(ctx, 31, 0x342ED8u);
    ctx->pc = 0x342ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342ED0u;
    // 0x342ed4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343258u, 0x342ED0u, 0x342ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342ED8u;
label_342ed8:
    // 0x342ed8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x342ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_342edc:
    // 0x342edc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x342edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_342ee0:
    // 0x342ee0: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
label_342ee4:
    if (ctx->pc == 0x342EE4u) {
        ctx->pc = 0x342EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EE0u;
        // 0x342ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342EE8u;
        goto label_342ee8;
    }
    ctx->pc = 0x342EE0u;
    {
        const bool branch_taken_0x342ee0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x342EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EE0u;
        // 0x342ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ee0) {
            ctx->pc = 0x342F04u;
            goto label_342f04;
        }
    }
    ctx->pc = 0x342EE8u;
label_342ee8:
    // 0x342ee8: 0xde220018  ld          $v0, 0x18($s1)
    ctx->pc = 0x342ee8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
label_342eec:
    // 0x342eec: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_342ef0:
    if (ctx->pc == 0x342EF0u) {
        ctx->pc = 0x342EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EECu;
        // 0x342ef0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342EF4u;
        goto label_342ef4;
    }
    ctx->pc = 0x342EECu;
    {
        const bool branch_taken_0x342eec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x342EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EECu;
        // 0x342ef0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342eec) {
            ctx->pc = 0x342F08u;
            goto label_342f08;
        }
    }
    ctx->pc = 0x342EF4u;
label_342ef4:
    // 0x342ef4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x342ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_342ef8:
    // 0x342ef8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_342efc:
    if (ctx->pc == 0x342EFCu) {
        ctx->pc = 0x342EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EF8u;
        // 0x342efc: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342F00u;
        goto label_342f00;
    }
    ctx->pc = 0x342EF8u;
    {
        const bool branch_taken_0x342ef8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x342EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EF8u;
        // 0x342efc: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ef8) {
            ctx->pc = 0x342F20u;
            goto label_342f20;
        }
    }
    ctx->pc = 0x342F00u;
label_342f00:
    // 0x342f00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x342f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_342f04:
    // 0x342f04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x342f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_342f08:
    // 0x342f08: 0xc0d0c10  jal         func_343040
label_342f0c:
    if (ctx->pc == 0x342F0Cu) {
        ctx->pc = 0x342F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F08u;
        // 0x342f0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342F10u;
        goto label_342f10;
    }
    ctx->pc = 0x342F08u;
    SET_GPR_U32(ctx, 31, 0x342F10u);
    ctx->pc = 0x342F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342F08u;
    // 0x342f0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343040u, 0x342F08u, 0x342F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342F10u;
label_342f10:
    // 0x342f10: 0xae330020  sw          $s3, 0x20($s1)
    ctx->pc = 0x342f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 19));
label_342f14:
    // 0x342f14: 0xfe300018  sd          $s0, 0x18($s1)
    ctx->pc = 0x342f14u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 16));
label_342f18:
    // 0x342f18: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x342f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_342f1c:
    // 0x342f1c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x342f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_342f20:
    // 0x342f20: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x342f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_342f24:
    // 0x342f24: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_342f28:
    if (ctx->pc == 0x342F28u) {
        ctx->pc = 0x342F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F24u;
        // 0x342f28: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342F2Cu;
        goto label_342f2c;
    }
    ctx->pc = 0x342F24u;
    {
        const bool branch_taken_0x342f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x342f24) {
            ctx->pc = 0x342F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342F24u;
            // 0x342f28: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342F40u;
            goto label_342f40;
        }
    }
    ctx->pc = 0x342F2Cu;
label_342f2c:
    // 0x342f2c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x342f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_342f30:
    // 0x342f30: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x342f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_342f34:
    // 0x342f34: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x342f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_342f38:
    // 0x342f38: 0x10000005  b           . + 4 + (0x5 << 2)
label_342f3c:
    if (ctx->pc == 0x342F3Cu) {
        ctx->pc = 0x342F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F38u;
        // 0x342f3c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342F40u;
        goto label_342f40;
    }
    ctx->pc = 0x342F38u;
    {
        const bool branch_taken_0x342f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F38u;
        // 0x342f3c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342f38) {
            ctx->pc = 0x342F50u;
            goto label_342f50;
        }
    }
    ctx->pc = 0x342F40u;
label_342f40:
    // 0x342f40: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x342f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_342f44:
    // 0x342f44: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x342f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_342f48:
    // 0x342f48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x342f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_342f4c:
    // 0x342f4c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x342f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_342f50:
    // 0x342f50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x342f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_342f54:
    // 0x342f54: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x342f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_342f58:
    // 0x342f58: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x342f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_342f5c:
    // 0x342f5c: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x342f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
label_342f60:
    // 0x342f60: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x342f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
label_342f64:
    // 0x342f64: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x342f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_342f68:
    // 0x342f68: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x342f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_342f6c:
    // 0x342f6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x342f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_342f70:
    // 0x342f70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x342f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_342f74:
    // 0x342f74: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x342f74u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
label_342f78:
    // 0x342f78: 0x7e450000  sq          $a1, 0x0($s2)
    ctx->pc = 0x342f78u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 5));
label_342f7c:
    // 0x342f7c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x342f7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_342f80:
    // 0x342f80: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x342f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_342f84:
    // 0x342f84: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x342f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_342f88:
    // 0x342f88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x342f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342f8c:
    // 0x342f8c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x342f8cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_342f90:
    // 0x342f90: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x342f90u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
label_342f94:
    // 0x342f94: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x342f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_342f98:
    // 0x342f98: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x342f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_342f9c:
    // 0x342f9c: 0x24420d00  addiu       $v0, $v0, 0xD00
    ctx->pc = 0x342f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
label_342fa0:
    // 0x342fa0: 0x3270000f  andi        $s0, $s3, 0xF
    ctx->pc = 0x342fa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
label_342fa4:
    // 0x342fa4: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x342fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_342fa8:
    // 0x342fa8: 0x245400d4  addiu       $s4, $v0, 0xD4
    ctx->pc = 0x342fa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 212));
label_342fac:
    // 0x342fac: 0x32738000  andi        $s3, $s3, 0x8000
    ctx->pc = 0x342facu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
label_342fb0:
    // 0x342fb0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x342fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_342fb4:
    // 0x342fb4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x342fb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_342fb8:
    // 0x342fb8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x342fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_342fbc:
    // 0x342fbc: 0x40f809  jalr        $v0
label_342fc0:
    if (ctx->pc == 0x342FC0u) {
        ctx->pc = 0x342FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FBCu;
        // 0x342fc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342FC4u;
        goto label_342fc4;
    }
    ctx->pc = 0x342FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342FC4u);
        ctx->pc = 0x342FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FBCu;
        // 0x342fc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342FBCu, 0x342FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342FC4u;
label_342fc4:
    // 0x342fc4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x342fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_342fc8:
    // 0x342fc8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x342fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_342fcc:
    // 0x342fcc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_342fd0:
    if (ctx->pc == 0x342FD0u) {
        ctx->pc = 0x342FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FCCu;
        // 0x342fd0: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342FD4u;
        goto label_342fd4;
    }
    ctx->pc = 0x342FCCu;
    {
        const bool branch_taken_0x342fcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x342FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FCCu;
        // 0x342fd0: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342fcc) {
            ctx->pc = 0x342FF0u;
            goto label_342ff0;
        }
    }
    ctx->pc = 0x342FD4u;
label_342fd4:
    // 0x342fd4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x342fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_342fd8:
    // 0x342fd8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x342fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_342fdc:
    // 0x342fdc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x342fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_342fe0:
    // 0x342fe0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x342fe0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_342fe4:
    // 0x342fe4: 0x10000004  b           . + 4 + (0x4 << 2)
label_342fe8:
    if (ctx->pc == 0x342FE8u) {
        ctx->pc = 0x342FECu;
        goto label_342fec;
    }
    ctx->pc = 0x342FE4u;
    {
        const bool branch_taken_0x342fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x342fe4) {
            ctx->pc = 0x342FF8u;
            goto label_342ff8;
        }
    }
    ctx->pc = 0x342FECu;
label_342fec:
    // 0x342fec: 0x0  nop
    ctx->pc = 0x342fecu;
    // NOP
label_342ff0:
    // 0x342ff0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x342ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_342ff4:
    // 0x342ff4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x342ff4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_342ff8:
    // 0x342ff8: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_342ffc:
    if (ctx->pc == 0x342FFCu) {
        ctx->pc = 0x342FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FF8u;
        // 0x342ffc: 0x26430018  addiu       $v1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343000u;
        goto label_343000;
    }
    ctx->pc = 0x342FF8u;
    {
        const bool branch_taken_0x342ff8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x342FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FF8u;
        // 0x342ffc: 0x26430018  addiu       $v1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ff8) {
            ctx->pc = 0x34300Cu;
            goto label_34300c;
        }
    }
    ctx->pc = 0x343000u;
label_343000:
    // 0x343000: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x343000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_343004:
    // 0x343004: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x343004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_343008:
    // 0x343008: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x343008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_34300c:
    // 0x34300c: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x34300cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
label_343010:
    // 0x343010: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x343010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_343014:
    // 0x343014: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x343014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_343018:
    // 0x343018: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x343018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_34301c:
    // 0x34301c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34301cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_343020:
    // 0x343020: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x343020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_343024:
    // 0x343024: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x343024u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_343028:
    // 0x343028: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x343028u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34302c:
    // 0x34302c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34302cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_343030:
    // 0x343030: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x343030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_343034:
    // 0x343034: 0x3e00008  jr          $ra
label_343038:
    if (ctx->pc == 0x343038u) {
        ctx->pc = 0x343038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343034u;
        // 0x343038: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34303Cu;
        goto label_34303c;
    }
    ctx->pc = 0x343034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343034u;
        // 0x343038: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34303Cu;
label_34303c:
    // 0x34303c: 0x0  nop
    ctx->pc = 0x34303cu;
    // NOP
    ctx->pc = 0x343040u;
}
