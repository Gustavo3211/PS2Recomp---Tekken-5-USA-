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

// Function: sub_0031E258
// Address: 0x31e258 - 0x31e3e0
void sub_0031E258_0x31e258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E258_0x31e258");
#endif

    switch (ctx->pc) {
        case 0x31e258u: goto label_31e258;
        case 0x31e25cu: goto label_31e25c;
        case 0x31e260u: goto label_31e260;
        case 0x31e264u: goto label_31e264;
        case 0x31e268u: goto label_31e268;
        case 0x31e26cu: goto label_31e26c;
        case 0x31e270u: goto label_31e270;
        case 0x31e274u: goto label_31e274;
        case 0x31e278u: goto label_31e278;
        case 0x31e27cu: goto label_31e27c;
        case 0x31e280u: goto label_31e280;
        case 0x31e284u: goto label_31e284;
        case 0x31e288u: goto label_31e288;
        case 0x31e28cu: goto label_31e28c;
        case 0x31e290u: goto label_31e290;
        case 0x31e294u: goto label_31e294;
        case 0x31e298u: goto label_31e298;
        case 0x31e29cu: goto label_31e29c;
        case 0x31e2a0u: goto label_31e2a0;
        case 0x31e2a4u: goto label_31e2a4;
        case 0x31e2a8u: goto label_31e2a8;
        case 0x31e2acu: goto label_31e2ac;
        case 0x31e2b0u: goto label_31e2b0;
        case 0x31e2b4u: goto label_31e2b4;
        case 0x31e2b8u: goto label_31e2b8;
        case 0x31e2bcu: goto label_31e2bc;
        case 0x31e2c0u: goto label_31e2c0;
        case 0x31e2c4u: goto label_31e2c4;
        case 0x31e2c8u: goto label_31e2c8;
        case 0x31e2ccu: goto label_31e2cc;
        case 0x31e2d0u: goto label_31e2d0;
        case 0x31e2d4u: goto label_31e2d4;
        case 0x31e2d8u: goto label_31e2d8;
        case 0x31e2dcu: goto label_31e2dc;
        case 0x31e2e0u: goto label_31e2e0;
        case 0x31e2e4u: goto label_31e2e4;
        case 0x31e2e8u: goto label_31e2e8;
        case 0x31e2ecu: goto label_31e2ec;
        case 0x31e2f0u: goto label_31e2f0;
        case 0x31e2f4u: goto label_31e2f4;
        case 0x31e2f8u: goto label_31e2f8;
        case 0x31e2fcu: goto label_31e2fc;
        case 0x31e300u: goto label_31e300;
        case 0x31e304u: goto label_31e304;
        case 0x31e308u: goto label_31e308;
        case 0x31e30cu: goto label_31e30c;
        case 0x31e310u: goto label_31e310;
        case 0x31e314u: goto label_31e314;
        case 0x31e318u: goto label_31e318;
        case 0x31e31cu: goto label_31e31c;
        case 0x31e320u: goto label_31e320;
        case 0x31e324u: goto label_31e324;
        case 0x31e328u: goto label_31e328;
        case 0x31e32cu: goto label_31e32c;
        case 0x31e330u: goto label_31e330;
        case 0x31e334u: goto label_31e334;
        case 0x31e338u: goto label_31e338;
        case 0x31e33cu: goto label_31e33c;
        case 0x31e340u: goto label_31e340;
        case 0x31e344u: goto label_31e344;
        case 0x31e348u: goto label_31e348;
        case 0x31e34cu: goto label_31e34c;
        case 0x31e350u: goto label_31e350;
        case 0x31e354u: goto label_31e354;
        case 0x31e358u: goto label_31e358;
        case 0x31e35cu: goto label_31e35c;
        case 0x31e360u: goto label_31e360;
        case 0x31e364u: goto label_31e364;
        case 0x31e368u: goto label_31e368;
        case 0x31e36cu: goto label_31e36c;
        case 0x31e370u: goto label_31e370;
        case 0x31e374u: goto label_31e374;
        case 0x31e378u: goto label_31e378;
        case 0x31e37cu: goto label_31e37c;
        case 0x31e380u: goto label_31e380;
        case 0x31e384u: goto label_31e384;
        case 0x31e388u: goto label_31e388;
        case 0x31e38cu: goto label_31e38c;
        case 0x31e390u: goto label_31e390;
        case 0x31e394u: goto label_31e394;
        case 0x31e398u: goto label_31e398;
        case 0x31e39cu: goto label_31e39c;
        case 0x31e3a0u: goto label_31e3a0;
        case 0x31e3a4u: goto label_31e3a4;
        case 0x31e3a8u: goto label_31e3a8;
        case 0x31e3acu: goto label_31e3ac;
        case 0x31e3b0u: goto label_31e3b0;
        case 0x31e3b4u: goto label_31e3b4;
        case 0x31e3b8u: goto label_31e3b8;
        case 0x31e3bcu: goto label_31e3bc;
        case 0x31e3c0u: goto label_31e3c0;
        case 0x31e3c4u: goto label_31e3c4;
        case 0x31e3c8u: goto label_31e3c8;
        case 0x31e3ccu: goto label_31e3cc;
        case 0x31e3d0u: goto label_31e3d0;
        case 0x31e3d4u: goto label_31e3d4;
        case 0x31e3d8u: goto label_31e3d8;
        case 0x31e3dcu: goto label_31e3dc;
        default: break;
    }

    ctx->pc = 0x31e258u;

label_31e258:
    // 0x31e258: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31e258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_31e25c:
    // 0x31e25c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31e260:
    // 0x31e260: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31e260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_31e264:
    // 0x31e264: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31e264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e268:
    // 0x31e268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_31e26c:
    // 0x31e26c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31e26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_31e270:
    // 0x31e270: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x31e270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_31e274:
    // 0x31e274: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x31e274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_31e278:
    // 0x31e278: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x31e278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_31e27c:
    // 0x31e27c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31e27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_31e280:
    // 0x31e280: 0x96510004  lhu         $s1, 0x4($s2)
    ctx->pc = 0x31e280u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_31e284:
    // 0x31e284: 0x1222004d  beq         $s1, $v0, . + 4 + (0x4D << 2)
label_31e288:
    if (ctx->pc == 0x31E288u) {
        ctx->pc = 0x31E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E284u;
        // 0x31e288: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E28Cu;
        goto label_31e28c;
    }
    ctx->pc = 0x31E284u;
    {
        const bool branch_taken_0x31e284 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x31E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E284u;
        // 0x31e288: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e284) {
            ctx->pc = 0x31E3BCu;
            goto label_31e3bc;
        }
    }
    ctx->pc = 0x31E28Cu;
label_31e28c:
    // 0x31e28c: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
label_31e290:
    if (ctx->pc == 0x31E290u) {
        ctx->pc = 0x31E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E28Cu;
        // 0x31e290: 0x2e220003  sltiu       $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E294u;
        goto label_31e294;
    }
    ctx->pc = 0x31E28Cu;
    {
        const bool branch_taken_0x31e28c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x31E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E28Cu;
        // 0x31e290: 0x2e220003  sltiu       $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e28c) {
            ctx->pc = 0x31E2B8u;
            goto label_31e2b8;
        }
    }
    ctx->pc = 0x31E294u;
label_31e294:
    // 0x31e294: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_31e298:
    if (ctx->pc == 0x31E298u) {
        ctx->pc = 0x31E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E294u;
        // 0x31e298: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E29Cu;
        goto label_31e29c;
    }
    ctx->pc = 0x31E294u;
    {
        const bool branch_taken_0x31e294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E294u;
        // 0x31e298: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e294) {
            ctx->pc = 0x31E2B0u;
            goto label_31e2b0;
        }
    }
    ctx->pc = 0x31E29Cu;
label_31e29c:
    // 0x31e29c: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_31e2a0:
    if (ctx->pc == 0x31E2A0u) {
        ctx->pc = 0x31E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E29Cu;
        // 0x31e2a0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E2A4u;
        goto label_31e2a4;
    }
    ctx->pc = 0x31E29Cu;
    {
        const bool branch_taken_0x31e29c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e29c) {
            ctx->pc = 0x31E2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E29Cu;
            // 0x31e2a0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E2BCu;
            goto label_31e2bc;
        }
    }
    ctx->pc = 0x31E2A4u;
label_31e2a4:
    // 0x31e2a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_31e2a8:
    if (ctx->pc == 0x31E2A8u) {
        ctx->pc = 0x31E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2A4u;
        // 0x31e2a8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E2ACu;
        goto label_31e2ac;
    }
    ctx->pc = 0x31E2A4u;
    {
        const bool branch_taken_0x31e2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2A4u;
        // 0x31e2a8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2a4) {
            ctx->pc = 0x31E2BCu;
            goto label_31e2bc;
        }
    }
    ctx->pc = 0x31E2ACu;
label_31e2ac:
    // 0x31e2ac: 0x0  nop
    ctx->pc = 0x31e2acu;
    // NOP
label_31e2b0:
    // 0x31e2b0: 0x56220002  bnel        $s1, $v0, . + 4 + (0x2 << 2)
label_31e2b4:
    if (ctx->pc == 0x31E2B4u) {
        ctx->pc = 0x31E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2B0u;
        // 0x31e2b4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E2B8u;
        goto label_31e2b8;
    }
    ctx->pc = 0x31E2B0u;
    {
        const bool branch_taken_0x31e2b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x31e2b0) {
            ctx->pc = 0x31E2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E2B0u;
            // 0x31e2b4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E2BCu;
            goto label_31e2bc;
        }
    }
    ctx->pc = 0x31E2B8u;
label_31e2b8:
    // 0x31e2b8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x31e2b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e2bc:
    // 0x31e2bc: 0x96440006  lhu         $a0, 0x6($s2)
    ctx->pc = 0x31e2bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_31e2c0:
    // 0x31e2c0: 0x96430008  lhu         $v1, 0x8($s2)
    ctx->pc = 0x31e2c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_31e2c4:
    // 0x31e2c4: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x31e2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_31e2c8:
    // 0x31e2c8: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_31e2cc:
    if (ctx->pc == 0x31E2CCu) {
        ctx->pc = 0x31E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2C8u;
        // 0x31e2cc: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E2D0u;
        goto label_31e2d0;
    }
    ctx->pc = 0x31E2C8u;
    {
        const bool branch_taken_0x31e2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2C8u;
        // 0x31e2cc: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2c8) {
            ctx->pc = 0x31E3BCu;
            goto label_31e3bc;
        }
    }
    ctx->pc = 0x31E2D0u;
label_31e2d0:
    // 0x31e2d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_31e2d4:
    if (ctx->pc == 0x31E2D4u) {
        ctx->pc = 0x31E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2D0u;
        // 0x31e2d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E2D8u;
        goto label_31e2d8;
    }
    ctx->pc = 0x31E2D0u;
    {
        const bool branch_taken_0x31e2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2D0u;
        // 0x31e2d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2d0) {
            ctx->pc = 0x31E2F4u;
            goto label_31e2f4;
        }
    }
    ctx->pc = 0x31E2D8u;
label_31e2d8:
    // 0x31e2d8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x31e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_31e2dc:
    // 0x31e2dc: 0x0  nop
    ctx->pc = 0x31e2dcu;
    // NOP
label_31e2e0:
    // 0x31e2e0: 0x0  nop
    ctx->pc = 0x31e2e0u;
    // NOP
label_31e2e4:
    // 0x31e2e4: 0x0  nop
    ctx->pc = 0x31e2e4u;
    // NOP
label_31e2e8:
    // 0x31e2e8: 0x0  nop
    ctx->pc = 0x31e2e8u;
    // NOP
label_31e2ec:
    // 0x31e2ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_31e2f0:
    if (ctx->pc == 0x31E2F0u) {
        ctx->pc = 0x31E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2ECu;
        // 0x31e2f0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E2F4u;
        goto label_31e2f4;
    }
    ctx->pc = 0x31E2ECu;
    {
        const bool branch_taken_0x31e2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2ECu;
        // 0x31e2f0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2ec) {
            ctx->pc = 0x31E2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e2d8;
        }
    }
    ctx->pc = 0x31E2F4u;
label_31e2f4:
    // 0x31e2f4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x31e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_31e2f8:
    // 0x31e2f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_31e2fc:
    if (ctx->pc == 0x31E2FCu) {
        ctx->pc = 0x31E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2F8u;
        // 0x31e2fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E300u;
        goto label_31e300;
    }
    ctx->pc = 0x31E2F8u;
    {
        const bool branch_taken_0x31e2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2F8u;
        // 0x31e2fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2f8) {
            ctx->pc = 0x31E31Cu;
            goto label_31e31c;
        }
    }
    ctx->pc = 0x31E300u;
label_31e300:
    // 0x31e300: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x31e300u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_31e304:
    // 0x31e304: 0x0  nop
    ctx->pc = 0x31e304u;
    // NOP
label_31e308:
    // 0x31e308: 0x0  nop
    ctx->pc = 0x31e308u;
    // NOP
label_31e30c:
    // 0x31e30c: 0x0  nop
    ctx->pc = 0x31e30cu;
    // NOP
label_31e310:
    // 0x31e310: 0x0  nop
    ctx->pc = 0x31e310u;
    // NOP
label_31e314:
    // 0x31e314: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_31e318:
    if (ctx->pc == 0x31E318u) {
        ctx->pc = 0x31E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E314u;
        // 0x31e318: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E31Cu;
        goto label_31e31c;
    }
    ctx->pc = 0x31E314u;
    {
        const bool branch_taken_0x31e314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E314u;
        // 0x31e318: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e314) {
            ctx->pc = 0x31E300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e300;
        }
    }
    ctx->pc = 0x31E31Cu;
label_31e31c:
    // 0x31e31c: 0x2e22003b  sltiu       $v0, $s1, 0x3B
    ctx->pc = 0x31e31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_31e320:
    // 0x31e320: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_31e324:
    if (ctx->pc == 0x31E324u) {
        ctx->pc = 0x31E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E320u;
        // 0x31e324: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E328u;
        goto label_31e328;
    }
    ctx->pc = 0x31E320u;
    {
        const bool branch_taken_0x31e320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E320u;
        // 0x31e324: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e320) {
            ctx->pc = 0x31E364u;
            goto label_31e364;
        }
    }
    ctx->pc = 0x31E328u;
label_31e328:
    // 0x31e328: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x31e328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_31e32c:
    // 0x31e32c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_31e330:
    // 0x31e330: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31e330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31e334:
    // 0x31e334: 0x8c632fb0  lw          $v1, 0x2FB0($v1)
    ctx->pc = 0x31e334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12208)));
label_31e338:
    // 0x31e338: 0x600008  jr          $v1
label_31e33c:
    if (ctx->pc == 0x31E33Cu) {
        ctx->pc = 0x31E340u;
        goto label_31e340;
    }
    ctx->pc = 0x31E338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31E340u: goto label_31e340;
            case 0x31E350u: goto label_31e350;
            case 0x31E360u: goto label_31e360;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E338u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31E340u;
label_31e340:
    // 0x31e340: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x31e340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
label_31e344:
    // 0x31e344: 0x10000007  b           . + 4 + (0x7 << 2)
label_31e348:
    if (ctx->pc == 0x31E348u) {
        ctx->pc = 0x31E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E344u;
        // 0x31e348: 0x28182  srl         $s0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E34Cu;
        goto label_31e34c;
    }
    ctx->pc = 0x31E344u;
    {
        const bool branch_taken_0x31e344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E344u;
        // 0x31e348: 0x28182  srl         $s0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e344) {
            ctx->pc = 0x31E364u;
            goto label_31e364;
        }
    }
    ctx->pc = 0x31E34Cu;
label_31e34c:
    // 0x31e34c: 0x0  nop
    ctx->pc = 0x31e34cu;
    // NOP
label_31e350:
    // 0x31e350: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x31e350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
label_31e354:
    // 0x31e354: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x31e354u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_31e358:
    // 0x31e358: 0x10000002  b           . + 4 + (0x2 << 2)
label_31e35c:
    if (ctx->pc == 0x31E35Cu) {
        ctx->pc = 0x31E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E358u;
        // 0x31e35c: 0x28040  sll         $s0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E360u;
        goto label_31e360;
    }
    ctx->pc = 0x31E358u;
    {
        const bool branch_taken_0x31e358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E358u;
        // 0x31e35c: 0x28040  sll         $s0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e358) {
            ctx->pc = 0x31E364u;
            goto label_31e364;
        }
    }
    ctx->pc = 0x31E360u;
label_31e360:
    // 0x31e360: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31e360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e364:
    // 0x31e364: 0xc0c77e8  jal         func_31DFA0
label_31e368:
    if (ctx->pc == 0x31E368u) {
        ctx->pc = 0x31E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E364u;
        // 0x31e368: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E36Cu;
        goto label_31e36c;
    }
    ctx->pc = 0x31E364u;
    SET_GPR_U32(ctx, 31, 0x31E36Cu);
    ctx->pc = 0x31E368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E364u;
    // 0x31e368: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA0u, 0x31E364u, 0x31E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E36Cu;
label_31e36c:
    // 0x31e36c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31e36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e370:
    // 0x31e370: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x31e370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_31e374:
    // 0x31e374: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x31e374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_31e378:
    // 0x31e378: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31e378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31e37c:
    // 0x31e37c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31e380:
    // 0x31e380: 0x40f809  jalr        $v0
label_31e384:
    if (ctx->pc == 0x31E384u) {
        ctx->pc = 0x31E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E380u;
        // 0x31e384: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E388u;
        goto label_31e388;
    }
    ctx->pc = 0x31E380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E388u);
        ctx->pc = 0x31E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E380u;
        // 0x31e384: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E380u, 0x31E388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E388u;
label_31e388:
    // 0x31e388: 0x1023b8  dsll        $a0, $s0, 14
    ctx->pc = 0x31e388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << 14);
label_31e38c:
    // 0x31e38c: 0x13283c  dsll32      $a1, $s3, 0
    ctx->pc = 0x31e38cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 0));
label_31e390:
    // 0x31e390: 0x1518bc  dsll32      $v1, $s5, 2
    ctx->pc = 0x31e390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 2));
label_31e394:
    // 0x31e394: 0x529ba  dsrl        $a1, $a1, 6
    ctx->pc = 0x31e394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 6);
label_31e398:
    // 0x31e398: 0x113538  dsll        $a2, $s1, 20
    ctx->pc = 0x31e398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << 20);
label_31e39c:
    // 0x31e39c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31e39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_31e3a0:
    // 0x31e3a0: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x31e3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
label_31e3a4:
    // 0x31e3a4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x31e3a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_31e3a8:
    // 0x31e3a8: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x31e3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
label_31e3ac:
    // 0x31e3ac: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x31e3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_31e3b0:
    // 0x31e3b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31e3b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_31e3b4:
    // 0x31e3b4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x31e3b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_31e3b8:
    // 0x31e3b8: 0xfe440038  sd          $a0, 0x38($s2)
    ctx->pc = 0x31e3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 4));
label_31e3bc:
    // 0x31e3bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e3bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e3c0:
    // 0x31e3c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31e3c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_31e3c4:
    // 0x31e3c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31e3c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31e3c8:
    // 0x31e3c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x31e3c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_31e3cc:
    // 0x31e3cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x31e3ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31e3d0:
    // 0x31e3d0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x31e3d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_31e3d4:
    // 0x31e3d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31e3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31e3d8:
    // 0x31e3d8: 0x3e00008  jr          $ra
label_31e3dc:
    if (ctx->pc == 0x31E3DCu) {
        ctx->pc = 0x31E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3D8u;
        // 0x31e3dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E3E0u;
        goto label_fallthrough_0x31e3d8;
    }
    ctx->pc = 0x31E3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3D8u;
        // 0x31e3dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31e3d8:
    ctx->pc = 0x31E3E0u;
}
