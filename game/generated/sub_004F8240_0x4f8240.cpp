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

// Function: sub_004F8240
// Address: 0x4f8240 - 0x4f8840
void sub_004F8240_0x4f8240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F8240_0x4f8240");
#endif

    switch (ctx->pc) {
        case 0x4f826cu: goto label_4f826c;
        case 0x4f8368u: goto label_4f8368;
        case 0x4f8394u: goto label_4f8394;
        case 0x4f842cu: goto label_4f842c;
        case 0x4f84bcu: goto label_4f84bc;
        case 0x4f8500u: goto label_4f8500;
        case 0x4f8528u: goto label_4f8528;
        case 0x4f8530u: goto label_4f8530;
        case 0x4f85e0u: goto label_4f85e0;
        case 0x4f85e8u: goto label_4f85e8;
        case 0x4f86a4u: goto label_4f86a4;
        case 0x4f86acu: goto label_4f86ac;
        case 0x4f8758u: goto label_4f8758;
        case 0x4f8784u: goto label_4f8784;
        case 0x4f880cu: goto label_4f880c;
        default: break;
    }

    ctx->pc = 0x4f8240u;

    // 0x4f8240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f8240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f8244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f8244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f8248: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f8248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f824c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f824cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f8250: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4f8250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4f8254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f8254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f8258: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f8258u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f825c: 0x442002d  bltzl       $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x4F825Cu;
    {
        const bool branch_taken_0x4f825c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f825c) {
            ctx->pc = 0x4F8260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F825Cu;
            // 0x4f8260: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8314u;
            goto label_4f8314;
        }
    }
    ctx->pc = 0x4F8264u;
    // 0x4f8264: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F8264u;
    SET_GPR_U32(ctx, 31, 0x4F826Cu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F8264u, 0x4F826Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F826Cu;
label_4f826c:
    // 0x4f826c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4f826cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4f8270: 0x960201be  lhu         $v0, 0x1BE($s0)
    ctx->pc = 0x4f8270u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4f8274: 0x26070124  addiu       $a3, $s0, 0x124
    ctx->pc = 0x4f8274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x4f8278: 0x86030160  lh          $v1, 0x160($s0)
    ctx->pc = 0x4f8278u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4f827c: 0x26050128  addiu       $a1, $s0, 0x128
    ctx->pc = 0x4f827cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x4f8280: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4f8280u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f8284: 0x2608012c  addiu       $t0, $s0, 0x12C
    ctx->pc = 0x4f8284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x4f8288: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f8288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f828c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4f828cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f8290: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4f8290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f8294: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f8294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f8298: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f8298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f829c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4f829cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4f82a0: 0x96040162  lhu         $a0, 0x162($s0)
    ctx->pc = 0x4f82a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x4f82a4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f82a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f82a8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f82a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f82ac: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f82acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f82b0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f82b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f82b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4f82b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4f82b8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f82b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f82bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f82bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f82c0: 0x86020164  lh          $v0, 0x164($s0)
    ctx->pc = 0x4f82c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x4f82c4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f82c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f82c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f82c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f82cc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f82ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f82d0: 0x96020166  lhu         $v0, 0x166($s0)
    ctx->pc = 0x4f82d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4f82d4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f82d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f82d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f82d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f82dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f82dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f82e0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f82e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f82e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f82e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f82e8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4f82e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4f82ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f82ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f82f0: 0x86020168  lh          $v0, 0x168($s0)
    ctx->pc = 0x4f82f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4f82f4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f82f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f82f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f82f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f82fc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4f82fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4f8300: 0xa609002e  sh          $t1, 0x2E($s0)
    ctx->pc = 0x4f8300u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 9));
    // 0x4f8304: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f8304u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f8308: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f8308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f830c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4f830cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f8310: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4f8310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4f8314:
    // 0x4f8314: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F8314u;
    {
        const bool branch_taken_0x4f8314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F8314u;
        // 0x4f8318: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8314) {
            ctx->pc = 0x4F8338u;
            goto label_4f8338;
        }
    }
    ctx->pc = 0x4F831Cu;
    // 0x4f831c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4F831Cu;
    {
        const bool branch_taken_0x4f831c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F831Cu;
        // 0x4f8320: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f831c) {
            ctx->pc = 0x4F8350u;
            goto label_4f8350;
        }
    }
    ctx->pc = 0x4F8324u;
    // 0x4f8324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f8324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f8328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f832c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F832Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F832Cu;
        // 0x4f8330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F832Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F8334u;
    // 0x4f8334: 0x0  nop
    ctx->pc = 0x4f8334u;
    // NOP
label_4f8338:
    // 0x4f8338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f8338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f833c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f833cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f8340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f8344: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f8344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f8348: 0x813dfc0  j           func_4F7F00
    ctx->pc = 0x4F8348u;
    ctx->pc = 0x4F834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8348u;
    // 0x4f834c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F7F00u, 0x4F8348u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F8350u;
label_4f8350:
    // 0x4f8350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f8350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f8354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f8358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f835c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f835cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f8360: 0x813df70  j           func_4F7DC0
    ctx->pc = 0x4F8360u;
    ctx->pc = 0x4F8364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8360u;
    // 0x4f8364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F7DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F7DC0u, 0x4F8360u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F8368u;
label_4f8368:
    // 0x4f8368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f8368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f836c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f836cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f8370: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f8370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8374: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f8374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f8378: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x4f8378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4f837c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f837cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f8380: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f8380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f8384: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f8384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f8388: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4f8388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4f838c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F838Cu;
    SET_GPR_U32(ctx, 31, 0x4F8394u);
    ctx->pc = 0x4F8390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F838Cu;
    // 0x4f8390: 0x26140018  addiu       $s4, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F838Cu, 0x4F8394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8394u;
label_4f8394:
    // 0x4f8394: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4f8394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8398: 0x2602015e  addiu       $v0, $s0, 0x15E
    ctx->pc = 0x4f8398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4f839c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4f839cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f83a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f83a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f83a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4f83a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4f83a8: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4f83a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f83ac: 0x4a1000a  bgez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x4F83ACu;
    {
        const bool branch_taken_0x4f83ac = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4F83B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F83ACu;
        // 0x4f83b0: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f83ac) {
            ctx->pc = 0x4F83D8u;
            goto label_4f83d8;
        }
    }
    ctx->pc = 0x4F83B4u;
    // 0x4f83b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f83b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f83b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f83b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f83bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f83bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f83c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f83c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f83c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f83c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f83c8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4f83c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f83cc: 0x813d9e4  j           func_4F6790
    ctx->pc = 0x4F83CCu;
    ctx->pc = 0x4F83D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F83CCu;
    // 0x4f83d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F6790u, 0x4F83CCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F83D4u;
    // 0x4f83d4: 0x0  nop
    ctx->pc = 0x4f83d4u;
    // NOP
label_4f83d8:
    // 0x4f83d8: 0x86020016  lh          $v0, 0x16($s0)
    ctx->pc = 0x4f83d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x4f83dc: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4F83DCu;
    {
        const bool branch_taken_0x4f83dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4F83E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F83DCu;
        // 0x4f83e0: 0x3c11ffff  lui         $s1, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f83dc) {
            ctx->pc = 0x4F8408u;
            goto label_4f8408;
        }
    }
    ctx->pc = 0x4F83E4u;
    // 0x4f83e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f83e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f83e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f83e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f83ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f83ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f83f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f83f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f83f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f83f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f83f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f83f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f83fc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4f83fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f8400: 0x813d9e4  j           func_4F6790
    ctx->pc = 0x4F8400u;
    ctx->pc = 0x4F8404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8400u;
    // 0x4f8404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F6790u, 0x4F8400u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F8408u;
label_4f8408:
    // 0x4f8408: 0x26040118  addiu       $a0, $s0, 0x118
    ctx->pc = 0x4f8408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x4f840c: 0x86030136  lh          $v1, 0x136($s0)
    ctx->pc = 0x4f840cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 310)));
    // 0x4f8410: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4f8410u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f8414: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f8414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f8418: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x4f8418u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f841c: 0xa4860000  sh          $a2, 0x0($a0)
    ctx->pc = 0x4f841cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4f8420: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x4f8420u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4f8424: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F8424u;
    SET_GPR_U32(ctx, 31, 0x4F842Cu);
    ctx->pc = 0x4F8428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8424u;
    // 0x4f8428: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F8424u, 0x4F842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F842Cu;
label_4f842c:
    // 0x4f842c: 0x26070128  addiu       $a3, $s0, 0x128
    ctx->pc = 0x4f842cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x4f8430: 0x960601b6  lhu         $a2, 0x1B6($s0)
    ctx->pc = 0x4f8430u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 438)));
    // 0x4f8434: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x4f8434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4f8438: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4f8438u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4f843c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f843cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8440: 0x30c60006  andi        $a2, $a2, 0x6
    ctx->pc = 0x4f8440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)6);
    // 0x4f8444: 0xa6020024  sh          $v0, 0x24($s0)
    ctx->pc = 0x4f8444u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f8448: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x4F8448u;
    {
        const bool branch_taken_0x4f8448 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F8448u;
        // 0x4f844c: 0xa6030022  sh          $v1, 0x22($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8448) {
            ctx->pc = 0x4F84ACu;
            goto label_4f84ac;
        }
    }
    ctx->pc = 0x4F8450u;
    // 0x4f8450: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x4f8450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x4f8454: 0x86030130  lh          $v1, 0x130($s0)
    ctx->pc = 0x4f8454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x4f8458: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4f8458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4f845c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4f845cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f8460: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f8460u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f8464: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f8464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f8468: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4f8468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4f846c: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x4f846cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4f8470: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x4f8470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4f8474: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f8474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f8478: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f8478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f847c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4f847cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4f8480: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x4f8480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x4f8484: 0x86020134  lh          $v0, 0x134($s0)
    ctx->pc = 0x4f8484u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x4f8488: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4f8488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4f848c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4f848cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f8490: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f8490u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f8494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f8494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f8498: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4f8498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4f849c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f849cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f84a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f84a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f84a4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f84a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f84a8: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4f84a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
label_4f84ac:
    // 0x4f84ac: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4f84acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f84b0: 0x2442b8a4  addiu       $v0, $v0, -0x475C
    ctx->pc = 0x4f84b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949028));
    // 0x4f84b4: 0xc12b9d0  jal         func_4AE740
    ctx->pc = 0x4F84B4u;
    SET_GPR_U32(ctx, 31, 0x4F84BCu);
    ctx->pc = 0x4F84B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F84B4u;
    // 0x4f84b8: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE740u, 0x4F84B4u, 0x4F84BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F84BCu;
label_4f84bc:
    // 0x4f84bc: 0x96020160  lhu         $v0, 0x160($s0)
    ctx->pc = 0x4f84bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4f84c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f84c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f84c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f84c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f84c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f84c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f84cc: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4f84ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4f84d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f84d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f84d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4f84d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f84d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f84dc: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x4f84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x4f84e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f84e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f84e4: 0x8c6384d8  lw          $v1, -0x7B28($v1)
    ctx->pc = 0x4f84e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935768)));
    // 0x4f84e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4f84e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f84ec: 0x94640006  lhu         $a0, 0x6($v1)
    ctx->pc = 0x4f84ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x4f84f0: 0xa604000c  sh          $a0, 0xC($s0)
    ctx->pc = 0x4f84f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f84f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f84f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f84f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4F84F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F84F8u;
        // 0x4f84fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F84F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F8500u;
label_4f8500:
    // 0x4f8500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f8500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f8504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f8504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f8508: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4f8508u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4f850c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f850cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f8510: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f8510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8514: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f8514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f8518: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f8518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f851c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f8520: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F8520u;
    SET_GPR_U32(ctx, 31, 0x4F8528u);
    ctx->pc = 0x4F8524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8520u;
    // 0x4f8524: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F8520u, 0x4F8528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8528u;
label_4f8528:
    // 0x4f8528: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F8528u;
    SET_GPR_U32(ctx, 31, 0x4F8530u);
    ctx->pc = 0x4F852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8528u;
    // 0x4f852c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F8528u, 0x4F8530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8530u;
label_4f8530:
    // 0x4f8530: 0x26280124  addiu       $t0, $s1, 0x124
    ctx->pc = 0x4f8530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    // 0x4f8534: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f8534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8538: 0x32430007  andi        $v1, $s2, 0x7
    ctx->pc = 0x4f8538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x4f853c: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4f853cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f8540: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f8540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f8544: 0xa6320024  sh          $s2, 0x24($s1)
    ctx->pc = 0x4f8544u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 18));
    // 0x4f8548: 0x123c02  srl         $a3, $s2, 16
    ctx->pc = 0x4f8548u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x4f854c: 0x32458000  andi        $a1, $s2, 0x8000
    ctx->pc = 0x4f854cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f8550: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x4f8550u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f8554: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x4f8554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4f8558: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f8558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f855c: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4f855cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f8560: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f8560u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f8564: 0x65980b  movn        $s3, $v1, $a1
    ctx->pc = 0x4f8564u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x4f8568: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f8568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f856c: 0x133400  sll         $a2, $s3, 16
    ctx->pc = 0x4f856cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f8570: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8574: 0xa6270022  sh          $a3, 0x22($s1)
    ctx->pc = 0x4f8574u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 7));
    // 0x4f8578: 0x829024  and         $s2, $a0, $v0
    ctx->pc = 0x4f8578u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f857c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4f857cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4f8580: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f8580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f8584: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4f8584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f8588: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f8588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f858c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4f858cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f8590: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f8590u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f8594: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8598: 0xb02024  and         $a0, $a1, $s0
    ctx->pc = 0x4f8598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4f859c: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f859cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f85a0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f85a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f85a4: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f85a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f85a8: 0x3647ffff  ori         $a3, $s2, 0xFFFF
    ctx->pc = 0x4f85a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f85ac: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f85acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f85b0: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f85b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f85b4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4f85b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4f85b8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f85b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f85bc: 0xe39024  and         $s2, $a3, $v1
    ctx->pc = 0x4f85bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4f85c0: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f85c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f85c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f85c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f85c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f85c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f85cc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f85ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f85d0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f85d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f85d4: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4f85d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4f85d8: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F85D8u;
    SET_GPR_U32(ctx, 31, 0x4F85E0u);
    ctx->pc = 0x4F85DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F85D8u;
    // 0x4f85dc: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F85D8u, 0x4F85E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F85E0u;
label_4f85e0:
    // 0x4f85e0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F85E0u;
    SET_GPR_U32(ctx, 31, 0x4F85E8u);
    ctx->pc = 0x4F85E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F85E0u;
    // 0x4f85e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F85E0u, 0x4F85E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F85E8u;
label_4f85e8:
    // 0x4f85e8: 0x3667ffff  ori         $a3, $s3, 0xFFFF
    ctx->pc = 0x4f85e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4f85ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f85ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f85f0: 0x2702024  and         $a0, $s3, $s0
    ctx->pc = 0x4f85f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4f85f4: 0x32420007  andi        $v0, $s2, 0x7
    ctx->pc = 0x4f85f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x4f85f8: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x4f85f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f85fc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f85fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8600: 0xa6320028  sh          $s2, 0x28($s1)
    ctx->pc = 0x4f8600u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 18));
    // 0x4f8604: 0x2501824  and         $v1, $s2, $s0
    ctx->pc = 0x4f8604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x4f8608: 0x32468000  andi        $a2, $s2, 0x8000
    ctx->pc = 0x4f8608u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f860c: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x4f860cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f8610: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4f8610u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8614: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f8614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f8618: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x4f8618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f861c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f861cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f8620: 0x86980a  movz        $s3, $a0, $a2
    ctx->pc = 0x4f8620u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
    // 0x4f8624: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f8624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f8628: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4f8628u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4f862c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f862cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8630: 0xa6230026  sh          $v1, 0x26($s1)
    ctx->pc = 0x4f8630u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f8634: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x4f8634u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f8638: 0x133400  sll         $a2, $s3, 16
    ctx->pc = 0x4f8638u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f863c: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f863cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f8640: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4f8640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f8644: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f8644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f8648: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4f8648u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4f864c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f864cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f8650: 0x26280128  addiu       $t0, $s1, 0x128
    ctx->pc = 0x4f8650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    // 0x4f8654: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8658: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4f8658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f865c: 0x829024  and         $s2, $a0, $v0
    ctx->pc = 0x4f865cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f8660: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f8660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f8664: 0x3647ffff  ori         $a3, $s2, 0xFFFF
    ctx->pc = 0x4f8664u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f8668: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f8668u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f866c: 0xb02024  and         $a0, $a1, $s0
    ctx->pc = 0x4f866cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4f8670: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4f8670u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4f8674: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f8674u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f8678: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f8678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f867c: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f867cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f8680: 0xe39024  and         $s2, $a3, $v1
    ctx->pc = 0x4f8680u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4f8684: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f8684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f8688: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f8688u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f868c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f868cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f8690: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f8690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f8694: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f8694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f8698: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4f8698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4f869c: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F869Cu;
    SET_GPR_U32(ctx, 31, 0x4F86A4u);
    ctx->pc = 0x4F86A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F869Cu;
    // 0x4f86a0: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F869Cu, 0x4F86A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F86A4u;
label_4f86a4:
    // 0x4f86a4: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F86A4u;
    SET_GPR_U32(ctx, 31, 0x4F86ACu);
    ctx->pc = 0x4F86A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F86A4u;
    // 0x4f86a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F86A4u, 0x4F86ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F86ACu;
label_4f86ac:
    // 0x4f86ac: 0x3667ffff  ori         $a3, $s3, 0xFFFF
    ctx->pc = 0x4f86acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4f86b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f86b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f86b4: 0x2702024  and         $a0, $s3, $s0
    ctx->pc = 0x4f86b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4f86b8: 0x32420007  andi        $v0, $s2, 0x7
    ctx->pc = 0x4f86b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x4f86bc: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4f86bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f86c0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f86c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f86c4: 0x32458000  andi        $a1, $s2, 0x8000
    ctx->pc = 0x4f86c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f86c8: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f86c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f86cc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4f86ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f86d0: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f86d4: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f86d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f86d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f86d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f86dc: 0x85980a  movz        $s3, $a0, $a1
    ctx->pc = 0x4f86dcu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
    // 0x4f86e0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f86e4: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x4f86e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f86e8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f86e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f86ec: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f86ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f86f0: 0xc29024  and         $s2, $a2, $v0
    ctx->pc = 0x4f86f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f86f4: 0x2627012c  addiu       $a3, $s1, 0x12C
    ctx->pc = 0x4f86f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x4f86f8: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f86f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f86fc: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f86fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f8700: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f8700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f8704: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4f8704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f8708: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f8708u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f870c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f870cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8710: 0xb02024  and         $a0, $a1, $s0
    ctx->pc = 0x4f8710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4f8714: 0xc29024  and         $s2, $a2, $v0
    ctx->pc = 0x4f8714u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f8718: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f8718u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f871c: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4f871cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f8720: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f8720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f8724: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f8724u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f8728: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f8728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f872c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4f872cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f8730: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8734: 0xc29024  and         $s2, $a2, $v0
    ctx->pc = 0x4f8734u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f8738: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f8738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f873c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f873cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f8740: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4f8740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4f8744: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f8744u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f8748: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f8748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f874c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4f874cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4f8750: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F8750u;
    SET_GPR_U32(ctx, 31, 0x4F8758u);
    ctx->pc = 0x4F8754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8750u;
    // 0x4f8754: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F8750u, 0x4F8758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8758u;
label_4f8758:
    // 0x4f8758: 0x2501824  and         $v1, $s2, $s0
    ctx->pc = 0x4f8758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x4f875c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f875cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8760: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4f8760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4f8764: 0x3053001f  andi        $s3, $v0, 0x1F
    ctx->pc = 0x4f8764u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x4f8768: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4f8768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f876c: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x4f876cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f8770: 0x2673002d  addiu       $s3, $s3, 0x2D
    ctx->pc = 0x4f8770u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 45));
    // 0x4f8774: 0xa633015e  sh          $s3, 0x15E($s1)
    ctx->pc = 0x4f8774u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 19));
    // 0x4f8778: 0x122c00  sll         $a1, $s2, 16
    ctx->pc = 0x4f8778u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f877c: 0xc13e438  jal         func_4F90E0
    ctx->pc = 0x4F877Cu;
    SET_GPR_U32(ctx, 31, 0x4F8784u);
    ctx->pc = 0x4F8780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F877Cu;
    // 0x4f8780: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F90E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F90E0u, 0x4F877Cu, 0x4F8784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8784u;
label_4f8784:
    // 0x4f8784: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4f8784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f8788: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f878c: 0x3665ffff  ori         $a1, $s3, 0xFFFF
    ctx->pc = 0x4f878cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4f8790: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f8790u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8794: 0x2703024  and         $a2, $s3, $s0
    ctx->pc = 0x4f8794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4f8798: 0x324201ff  andi        $v0, $s2, 0x1FF
    ctx->pc = 0x4f8798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)511);
    // 0x4f879c: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4f879cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f87a0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f87a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f87a4: 0x32448000  andi        $a0, $s2, 0x8000
    ctx->pc = 0x4f87a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x4f87a8: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f87a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f87ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4f87acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f87b0: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f87b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f87b4: 0xc4980a  movz        $s3, $a2, $a0
    ctx->pc = 0x4f87b4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 6));
    // 0x4f87b8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f87b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f87bc: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f87bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f87c0: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x4f87c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x4f87c4: 0x132c00  sll         $a1, $s3, 16
    ctx->pc = 0x4f87c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4f87c8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f87c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f87cc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4f87ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4f87d0: 0xc39024  and         $s2, $a2, $v1
    ctx->pc = 0x4f87d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4f87d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f87d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f87d8: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x4f87d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x4f87dc: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f87dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f87e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f87e4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f87e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f87e8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f87e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f87ec: 0xc29024  and         $s2, $a2, $v0
    ctx->pc = 0x4f87ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f87f0: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4f87f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f87f4: 0x3642ffff  ori         $v0, $s2, 0xFFFF
    ctx->pc = 0x4f87f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f87f8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f87f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f87fc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4f87fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4f8800: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4f8800u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8804: 0xc12b6a4  jal         func_4ADA90
    ctx->pc = 0x4F8804u;
    SET_GPR_U32(ctx, 31, 0x4F880Cu);
    ctx->pc = 0x4F8808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8804u;
    // 0x4f8808: 0xa6320136  sh          $s2, 0x136($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 310), (uint16_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA90u, 0x4F8804u, 0x4F880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F880Cu;
label_4f880c:
    // 0x4f880c: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4f880cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4f8810: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f8810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f8814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f8814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f8818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f881c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f881cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f8820: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f8820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f8824: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f8824u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f8828: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f8828u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f882c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f882cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f8830: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f8830u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f8834: 0x813e0da  j           func_4F8368
    ctx->pc = 0x4F8834u;
    ctx->pc = 0x4F8838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8834u;
    // 0x4f8838: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8368u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4f8368;
    ctx->pc = 0x4F883Cu;
    // 0x4f883c: 0x0  nop
    ctx->pc = 0x4f883cu;
    // NOP
    ctx->pc = 0x4f8840u;
}
