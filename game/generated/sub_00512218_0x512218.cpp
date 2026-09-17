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

// Function: sub_00512218
// Address: 0x512218 - 0x512378
void sub_00512218_0x512218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512218_0x512218");
#endif

    switch (ctx->pc) {
        case 0x512218u: goto label_512218;
        case 0x51221cu: goto label_51221c;
        case 0x512220u: goto label_512220;
        case 0x512224u: goto label_512224;
        case 0x512228u: goto label_512228;
        case 0x51222cu: goto label_51222c;
        case 0x512230u: goto label_512230;
        case 0x512234u: goto label_512234;
        case 0x512238u: goto label_512238;
        case 0x51223cu: goto label_51223c;
        case 0x512240u: goto label_512240;
        case 0x512244u: goto label_512244;
        case 0x512248u: goto label_512248;
        case 0x51224cu: goto label_51224c;
        case 0x512250u: goto label_512250;
        case 0x512254u: goto label_512254;
        case 0x512258u: goto label_512258;
        case 0x51225cu: goto label_51225c;
        case 0x512260u: goto label_512260;
        case 0x512264u: goto label_512264;
        case 0x512268u: goto label_512268;
        case 0x51226cu: goto label_51226c;
        case 0x512270u: goto label_512270;
        case 0x512274u: goto label_512274;
        case 0x512278u: goto label_512278;
        case 0x51227cu: goto label_51227c;
        case 0x512280u: goto label_512280;
        case 0x512284u: goto label_512284;
        case 0x512288u: goto label_512288;
        case 0x51228cu: goto label_51228c;
        case 0x512290u: goto label_512290;
        case 0x512294u: goto label_512294;
        case 0x512298u: goto label_512298;
        case 0x51229cu: goto label_51229c;
        case 0x5122a0u: goto label_5122a0;
        case 0x5122a4u: goto label_5122a4;
        case 0x5122a8u: goto label_5122a8;
        case 0x5122acu: goto label_5122ac;
        case 0x5122b0u: goto label_5122b0;
        case 0x5122b4u: goto label_5122b4;
        case 0x5122b8u: goto label_5122b8;
        case 0x5122bcu: goto label_5122bc;
        case 0x5122c0u: goto label_5122c0;
        case 0x5122c4u: goto label_5122c4;
        case 0x5122c8u: goto label_5122c8;
        case 0x5122ccu: goto label_5122cc;
        case 0x5122d0u: goto label_5122d0;
        case 0x5122d4u: goto label_5122d4;
        case 0x5122d8u: goto label_5122d8;
        case 0x5122dcu: goto label_5122dc;
        case 0x5122e0u: goto label_5122e0;
        case 0x5122e4u: goto label_5122e4;
        case 0x5122e8u: goto label_5122e8;
        case 0x5122ecu: goto label_5122ec;
        case 0x5122f0u: goto label_5122f0;
        case 0x5122f4u: goto label_5122f4;
        case 0x5122f8u: goto label_5122f8;
        case 0x5122fcu: goto label_5122fc;
        case 0x512300u: goto label_512300;
        case 0x512304u: goto label_512304;
        case 0x512308u: goto label_512308;
        case 0x51230cu: goto label_51230c;
        case 0x512310u: goto label_512310;
        case 0x512314u: goto label_512314;
        case 0x512318u: goto label_512318;
        case 0x51231cu: goto label_51231c;
        case 0x512320u: goto label_512320;
        case 0x512324u: goto label_512324;
        case 0x512328u: goto label_512328;
        case 0x51232cu: goto label_51232c;
        case 0x512330u: goto label_512330;
        case 0x512334u: goto label_512334;
        case 0x512338u: goto label_512338;
        case 0x51233cu: goto label_51233c;
        case 0x512340u: goto label_512340;
        case 0x512344u: goto label_512344;
        case 0x512348u: goto label_512348;
        case 0x51234cu: goto label_51234c;
        case 0x512350u: goto label_512350;
        case 0x512354u: goto label_512354;
        case 0x512358u: goto label_512358;
        case 0x51235cu: goto label_51235c;
        case 0x512360u: goto label_512360;
        case 0x512364u: goto label_512364;
        case 0x512368u: goto label_512368;
        case 0x51236cu: goto label_51236c;
        case 0x512370u: goto label_512370;
        case 0x512374u: goto label_512374;
        default: break;
    }

    ctx->pc = 0x512218u;

label_512218:
    // 0x512218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x512218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_51221c:
    // 0x51221c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x51221cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_512220:
    // 0x512220: 0xc144ac0  jal         func_512B00
label_512224:
    if (ctx->pc == 0x512224u) {
        ctx->pc = 0x512228u;
        goto label_512228;
    }
    ctx->pc = 0x512220u;
    SET_GPR_U32(ctx, 31, 0x512228u);
    ctx->pc = 0x512B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512B00u, 0x512220u, 0x512228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x512228u;
label_512228:
    // 0x512228: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x512228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_51222c:
    // 0x51222c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x51222cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_512230:
    // 0x512230: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x512230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_512234:
    // 0x512234: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x512234u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
label_512238:
    // 0x512238: 0xa4450022  sh          $a1, 0x22($v0)
    ctx->pc = 0x512238u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 5));
label_51223c:
    // 0x51223c: 0x3c050118  lui         $a1, 0x118
    ctx->pc = 0x51223cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)280 << 16));
label_512240:
    // 0x512240: 0xa444000e  sh          $a0, 0xE($v0)
    ctx->pc = 0x512240u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 4));
label_512244:
    // 0x512244: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x512244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_512248:
    // 0x512248: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x512248u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_51224c:
    // 0x51224c: 0x3c030176  lui         $v1, 0x176
    ctx->pc = 0x51224cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)374 << 16));
label_512250:
    // 0x512250: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x512250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_512254:
    // 0x512254: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x512254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_512258:
    // 0x512258: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x512258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_51225c:
    // 0x51225c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x51225cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_512260:
    // 0x512260: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x512260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_512264:
    // 0x512264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x512264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_512268:
    // 0x512268: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x512268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_51226c:
    // 0x51226c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x51226cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_512270:
    // 0x512270: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x512270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_512274:
    // 0x512274: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x512274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_512278:
    // 0x512278: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x512278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_51227c:
    // 0x51227c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x51227cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_512280:
    // 0x512280: 0x3e00008  jr          $ra
label_512284:
    if (ctx->pc == 0x512284u) {
        ctx->pc = 0x512284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512280u;
        // 0x512284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x512288u;
        goto label_512288;
    }
    ctx->pc = 0x512280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512280u;
        // 0x512284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512288u;
label_512288:
    // 0x512288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x512288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_51228c:
    // 0x51228c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x51228cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_512290:
    // 0x512290: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x512290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_512294:
    // 0x512294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x512294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_512298:
    // 0x512298: 0xc124620  jal         func_491880
label_51229c:
    if (ctx->pc == 0x51229Cu) {
        ctx->pc = 0x51229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512298u;
        // 0x51229c: 0x3c110090  lui         $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)144 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5122A0u;
        goto label_5122a0;
    }
    ctx->pc = 0x512298u;
    SET_GPR_U32(ctx, 31, 0x5122A0u);
    ctx->pc = 0x51229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x512298u;
    // 0x51229c: 0x3c110090  lui         $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)144 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x512298u, 0x5122A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5122A0u;
label_5122a0:
    // 0x5122a0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x5122a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_5122a4:
    // 0x5122a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x5122a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_5122a8:
    // 0x5122a8: 0x8463e820  lh          $v1, -0x17E0($v1)
    ctx->pc = 0x5122a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961184)));
label_5122ac:
    // 0x5122ac: 0x2622f080  addiu       $v0, $s1, -0xF80
    ctx->pc = 0x5122acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
label_5122b0:
    // 0x5122b0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x5122b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_5122b4:
    // 0x5122b4: 0x2446000a  addiu       $a2, $v0, 0xA
    ctx->pc = 0x5122b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_5122b8:
    // 0x5122b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x5122b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_5122bc:
    // 0x5122bc: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x5122bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_5122c0:
    // 0x5122c0: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x5122c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_5122c4:
    // 0x5122c4: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x5122c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_5122c8:
    // 0x5122c8: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x5122c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_5122cc:
    // 0x5122cc: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x5122ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
label_5122d0:
    // 0x5122d0: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
label_5122d4:
    if (ctx->pc == 0x5122D4u) {
        ctx->pc = 0x5122D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5122D0u;
        // 0x5122d4: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5122D8u;
        goto label_5122d8;
    }
    ctx->pc = 0x5122D0u;
    {
        const bool branch_taken_0x5122d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x5122D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5122D0u;
        // 0x5122d4: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5122d0) {
            ctx->pc = 0x512330u;
            goto label_512330;
        }
    }
    ctx->pc = 0x5122D8u;
label_5122d8:
    // 0x5122d8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_5122dc:
    if (ctx->pc == 0x5122DCu) {
        ctx->pc = 0x5122DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5122D8u;
        // 0x5122dc: 0xa4c50000  sh          $a1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5122E0u;
        goto label_5122e0;
    }
    ctx->pc = 0x5122D8u;
    {
        const bool branch_taken_0x5122d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5122DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5122D8u;
        // 0x5122dc: 0xa4c50000  sh          $a1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5122d8) {
            ctx->pc = 0x512330u;
            goto label_512330;
        }
    }
    ctx->pc = 0x5122E0u;
label_5122e0:
    // 0x5122e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x5122e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5122e4:
    // 0x5122e4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x5122e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_5122e8:
    // 0x5122e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x5122e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_5122ec:
    // 0x5122ec: 0x8c63d4d0  lw          $v1, -0x2B30($v1)
    ctx->pc = 0x5122ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956240)));
label_5122f0:
    // 0x5122f0: 0x600008  jr          $v1
label_5122f4:
    if (ctx->pc == 0x5122F4u) {
        ctx->pc = 0x5122F8u;
        goto label_5122f8;
    }
    ctx->pc = 0x5122F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x5122F8u: goto label_5122f8;
            case 0x512308u: goto label_512308;
            case 0x512318u: goto label_512318;
            case 0x512328u: goto label_512328;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5122F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5122F8u;
label_5122f8:
    // 0x5122f8: 0xc1432a0  jal         func_50CA80
label_5122fc:
    if (ctx->pc == 0x5122FCu) {
        ctx->pc = 0x512300u;
        goto label_512300;
    }
    ctx->pc = 0x5122F8u;
    SET_GPR_U32(ctx, 31, 0x512300u);
    ctx->pc = 0x50CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50CA80u, 0x5122F8u, 0x512300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x512300u;
label_512300:
    // 0x512300: 0x1000000c  b           . + 4 + (0xC << 2)
label_512304:
    if (ctx->pc == 0x512304u) {
        ctx->pc = 0x512304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512300u;
        // 0x512304: 0x2623f080  addiu       $v1, $s1, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x512308u;
        goto label_512308;
    }
    ctx->pc = 0x512300u;
    {
        const bool branch_taken_0x512300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x512304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512300u;
        // 0x512304: 0x2623f080  addiu       $v1, $s1, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512300) {
            ctx->pc = 0x512334u;
            goto label_512334;
        }
    }
    ctx->pc = 0x512308u;
label_512308:
    // 0x512308: 0xc14485c  jal         func_512170
label_51230c:
    if (ctx->pc == 0x51230Cu) {
        ctx->pc = 0x512310u;
        goto label_512310;
    }
    ctx->pc = 0x512308u;
    SET_GPR_U32(ctx, 31, 0x512310u);
    ctx->pc = 0x512170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512170u, 0x512308u, 0x512310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x512310u;
label_512310:
    // 0x512310: 0x10000008  b           . + 4 + (0x8 << 2)
label_512314:
    if (ctx->pc == 0x512314u) {
        ctx->pc = 0x512314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512310u;
        // 0x512314: 0x2623f080  addiu       $v1, $s1, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x512318u;
        goto label_512318;
    }
    ctx->pc = 0x512310u;
    {
        const bool branch_taken_0x512310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x512314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512310u;
        // 0x512314: 0x2623f080  addiu       $v1, $s1, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512310) {
            ctx->pc = 0x512334u;
            goto label_512334;
        }
    }
    ctx->pc = 0x512318u;
label_512318:
    // 0x512318: 0xc14485a  jal         func_512168
label_51231c:
    if (ctx->pc == 0x51231Cu) {
        ctx->pc = 0x512320u;
        goto label_512320;
    }
    ctx->pc = 0x512318u;
    SET_GPR_U32(ctx, 31, 0x512320u);
    ctx->pc = 0x512168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512168u, 0x512318u, 0x512320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x512320u;
label_512320:
    // 0x512320: 0x10000004  b           . + 4 + (0x4 << 2)
label_512324:
    if (ctx->pc == 0x512324u) {
        ctx->pc = 0x512324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512320u;
        // 0x512324: 0x2623f080  addiu       $v1, $s1, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x512328u;
        goto label_512328;
    }
    ctx->pc = 0x512320u;
    {
        const bool branch_taken_0x512320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x512324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512320u;
        // 0x512324: 0x2623f080  addiu       $v1, $s1, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512320) {
            ctx->pc = 0x512334u;
            goto label_512334;
        }
    }
    ctx->pc = 0x512328u;
label_512328:
    // 0x512328: 0xc144886  jal         func_512218
label_51232c:
    if (ctx->pc == 0x51232Cu) {
        ctx->pc = 0x512330u;
        goto label_512330;
    }
    ctx->pc = 0x512328u;
    SET_GPR_U32(ctx, 31, 0x512330u);
    ctx->pc = 0x512218u;
    goto label_512218;
    ctx->pc = 0x512330u;
label_512330:
    // 0x512330: 0x2623f080  addiu       $v1, $s1, -0xF80
    ctx->pc = 0x512330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
label_512334:
    // 0x512334: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x512334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_512338:
    // 0x512338: 0x8462000a  lh          $v0, 0xA($v1)
    ctx->pc = 0x512338u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_51233c:
    // 0x51233c: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x51233cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_512340:
    // 0x512340: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x512340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_512344:
    // 0x512344: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x512344u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_512348:
    // 0x512348: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x512348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_51234c:
    // 0x51234c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x51234cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_512350:
    // 0x512350: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x512350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_512354:
    // 0x512354: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_512358:
    if (ctx->pc == 0x512358u) {
        ctx->pc = 0x512358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512354u;
        // 0x512358: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x51235Cu;
        goto label_51235c;
    }
    ctx->pc = 0x512354u;
    {
        const bool branch_taken_0x512354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x512354) {
            ctx->pc = 0x512358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x512354u;
            // 0x512358: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5123F0u;
            return;
        }
    }
    ctx->pc = 0x51235Cu;
label_51235c:
    // 0x51235c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x51235cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_512360:
    // 0x512360: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x512360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_512364:
    // 0x512364: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x512364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_512368:
    // 0x512368: 0x8c63d4f0  lw          $v1, -0x2B10($v1)
    ctx->pc = 0x512368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956272)));
label_51236c:
    // 0x51236c: 0x600008  jr          $v1
label_512370:
    if (ctx->pc == 0x512370u) {
        ctx->pc = 0x512374u;
        goto label_512374;
    }
    ctx->pc = 0x51236Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x51236Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x512374u;
label_512374:
    // 0x512374: 0x0  nop
    ctx->pc = 0x512374u;
    // NOP
    ctx->pc = 0x512378u;
}
