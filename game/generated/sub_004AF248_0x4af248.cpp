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

// Function: sub_004AF248
// Address: 0x4af248 - 0x4af520
void sub_004AF248_0x4af248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF248_0x4af248");
#endif

    switch (ctx->pc) {
        case 0x4af2e0u: goto label_4af2e0;
        case 0x4af33cu: goto label_4af33c;
        case 0x4af3a0u: goto label_4af3a0;
        case 0x4af430u: goto label_4af430;
        case 0x4af4bcu: goto label_4af4bc;
        default: break;
    }

    ctx->pc = 0x4af248u;

    // 0x4af248: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4af248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4af24c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4af24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4af250: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4af250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4af254: 0x3c170073  lui         $s7, 0x73
    ctx->pc = 0x4af254u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)115 << 16));
    // 0x4af258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4af258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4af25c: 0x26e6d680  addiu       $a2, $s7, -0x2980
    ctx->pc = 0x4af25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956672));
    // 0x4af260: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4af260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4af264: 0x24450d10  addiu       $a1, $v0, 0xD10
    ctx->pc = 0x4af264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3344));
    // 0x4af268: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4af268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4af26c: 0x24c7231e  addiu       $a3, $a2, 0x231E
    ctx->pc = 0x4af26cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8990));
    // 0x4af270: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4af270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4af274: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4af274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4af278: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4af278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4af27c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4af27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4af280: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4af280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4af284: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4af284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4af288: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4af288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D10u));
    // 0x4af28c: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x4af28cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72F99Eu));
    // 0x4af290: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4af290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4af294: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4af294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4af298: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4af298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4af29c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4af29cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4af2a0: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4af2a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4af2a4: 0x4600033  bltz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x4AF2A4u;
    {
        const bool branch_taken_0x4af2a4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4AF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF2A4u;
        // 0x4af2a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af2a4) {
            ctx->pc = 0x4AF374u;
            goto label_4af374;
        }
    }
    ctx->pc = 0x4AF2ACu;
    // 0x4af2ac: 0x8cc32304  lw          $v1, 0x2304($a2)
    ctx->pc = 0x4af2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8964)));
    // 0x4af2b0: 0x84c2231a  lh          $v0, 0x231A($a2)
    ctx->pc = 0x4af2b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8986)));
    // 0x4af2b4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4af2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4af2b8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4af2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4af2bc: 0x24900d14  addiu       $s0, $a0, 0xD14
    ctx->pc = 0x4af2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3348));
    // 0x4af2c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4af2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4af2c4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4af2c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af2c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4af2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4af2cc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4af2ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af2d0: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x4af2d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4af2d4: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4af2d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4af2d8: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4af2d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4af2dc: 0x0  nop
    ctx->pc = 0x4af2dcu;
    // NOP
label_4af2e0:
    // 0x4af2e0: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4af2e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4af2e4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4af2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af2e8: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x4af2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4af2ec: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x4af2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x4af2f0: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x4af2f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x4af2f4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4af2f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4af2f8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x4af2f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x4af2fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4af2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4af300: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x4af300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x4af304: 0xaea30d0c  sw          $v1, 0xD0C($s5)
    ctx->pc = 0x4af304u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3340), GPR_U32(ctx, 3));
    // 0x4af308: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4af308u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4af30c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4af30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4af310: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4af310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4af314: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4af314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4af318: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4af318u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af31c: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4AF31Cu;
    {
        const bool branch_taken_0x4af31c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AF320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF31Cu;
        // 0x4af320: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af31c) {
            ctx->pc = 0x4AF368u;
            goto label_4af368;
        }
    }
    ctx->pc = 0x4AF324u;
    // 0x4af324: 0x96c2231c  lhu         $v0, 0x231C($s6)
    ctx->pc = 0x4af324u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 8988)));
    // 0x4af328: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4af328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4af32c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x4AF32Cu;
    {
        const bool branch_taken_0x4af32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4af32c) {
            ctx->pc = 0x4AF330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AF32Cu;
            // 0x4af330: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AF378u;
            goto label_4af378;
        }
    }
    ctx->pc = 0x4AF334u;
    // 0x4af334: 0xc12bb10  jal         func_4AEC40
    ctx->pc = 0x4AF334u;
    SET_GPR_U32(ctx, 31, 0x4AF33Cu);
    ctx->pc = 0x4AEC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEC40u, 0x4AF334u, 0x4AF33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF33Cu;
label_4af33c:
    // 0x4af33c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4af33cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4af340: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4af340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4af344: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4af344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4af348: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4af348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4af34c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4af34cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4af350: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4af350u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4af354: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x4af354u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4af358: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4af358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4af35c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4af35cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4af360: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x4AF360u;
    {
        const bool branch_taken_0x4af360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF360u;
        // 0x4af364: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af360) {
            ctx->pc = 0x4AF2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4af2e0;
        }
    }
    ctx->pc = 0x4AF368u;
label_4af368:
    // 0x4af368: 0x26e3d680  addiu       $v1, $s7, -0x2980
    ctx->pc = 0x4af368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956672));
    // 0x4af36c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4af36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4af370: 0xa462231e  sh          $v0, 0x231E($v1)
    ctx->pc = 0x4af370u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8990), (uint16_t)GPR_U32(ctx, 2));
label_4af374:
    // 0x4af374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4af374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4af378:
    // 0x4af378: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4af378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4af37c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4af37cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4af380: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4af380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4af384: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4af384u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4af388: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4af388u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4af38c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4af38cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4af390: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4af390u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4af394: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4af394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4af398: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF398u;
        // 0x4af39c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF3A0u;
label_4af3a0:
    // 0x4af3a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4af3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4af3a4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4af3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4af3a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4af3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4af3ac: 0x3c140073  lui         $s4, 0x73
    ctx->pc = 0x4af3acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
    // 0x4af3b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4af3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4af3b4: 0x2686d680  addiu       $a2, $s4, -0x2980
    ctx->pc = 0x4af3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
    // 0x4af3b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4af3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4af3bc: 0x24450d10  addiu       $a1, $v0, 0xD10
    ctx->pc = 0x4af3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3344));
    // 0x4af3c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4af3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4af3c4: 0x24c72320  addiu       $a3, $a2, 0x2320
    ctx->pc = 0x4af3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8992));
    // 0x4af3c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4af3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4af3cc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4af3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4af3d0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4af3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4af3d4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4af3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4af3d8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4af3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4af3dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4af3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D10u));
    // 0x4af3e0: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x4af3e0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72F9A0u));
    // 0x4af3e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4af3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4af3e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4af3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4af3ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4af3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4af3f0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4af3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4af3f4: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4af3f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4af3f8: 0x460003e  bltz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x4AF3F8u;
    {
        const bool branch_taken_0x4af3f8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4AF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF3F8u;
        // 0x4af3fc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af3f8) {
            ctx->pc = 0x4AF4F4u;
            goto label_4af4f4;
        }
    }
    ctx->pc = 0x4AF400u;
    // 0x4af400: 0x8cc32304  lw          $v1, 0x2304($a2)
    ctx->pc = 0x4af400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8964)));
    // 0x4af404: 0x84c2231a  lh          $v0, 0x231A($a2)
    ctx->pc = 0x4af404u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8986)));
    // 0x4af408: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4af408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4af40c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4af40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4af410: 0x24910d14  addiu       $s1, $a0, 0xD14
    ctx->pc = 0x4af410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 3348));
    // 0x4af414: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4af414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4af418: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4af418u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af41c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4af41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4af420: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4af420u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4af424: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x4af424u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4af428: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4af428u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4af42c: 0x0  nop
    ctx->pc = 0x4af42cu;
    // NOP
label_4af430:
    // 0x4af430: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4af430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af434: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4af434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4af438: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x4af438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4af43c: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x4af43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x4af440: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x4af440u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x4af444: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4af444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4af448: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x4af448u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x4af44c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4af44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4af450: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x4af450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x4af454: 0xaec30d0c  sw          $v1, 0xD0C($s6)
    ctx->pc = 0x4af454u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 3340), GPR_U32(ctx, 3));
    // 0x4af458: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4af458u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4af45c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4af45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4af460: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4af460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4af464: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4af464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4af468: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4af468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4af46c: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4AF46Cu;
    {
        const bool branch_taken_0x4af46c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF46Cu;
        // 0x4af470: 0x96230000  lhu         $v1, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af46c) {
            ctx->pc = 0x4AF4E8u;
            goto label_4af4e8;
        }
    }
    ctx->pc = 0x4AF474u;
    // 0x4af474: 0x2684d680  addiu       $a0, $s4, -0x2980
    ctx->pc = 0x4af474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
    // 0x4af478: 0x9482231c  lhu         $v0, 0x231C($a0)
    ctx->pc = 0x4af478u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8988)));
    // 0x4af47c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4af47cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4af480: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x4AF480u;
    {
        const bool branch_taken_0x4af480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4af480) {
            ctx->pc = 0x4AF484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AF480u;
            // 0x4af484: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AF4F8u;
            goto label_4af4f8;
        }
    }
    ctx->pc = 0x4AF488u;
    // 0x4af488: 0x84822426  lh          $v0, 0x2426($a0)
    ctx->pc = 0x4af488u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 9254)));
    // 0x4af48c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4af48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af490: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4af490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4af494: 0x94842424  lhu         $a0, 0x2424($a0)
    ctx->pc = 0x4af494u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 9252)));
    // 0x4af498: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4af498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4af49c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4af49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4af4a0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4af4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4af4a4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4af4a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af4a8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4af4a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4af4ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AF4ACu;
    {
        const bool branch_taken_0x4af4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4af4ac) {
            ctx->pc = 0x4AF4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AF4ACu;
            // 0x4af4b0: 0x96640000  lhu         $a0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AF4C0u;
            goto label_4af4c0;
        }
    }
    ctx->pc = 0x4AF4B4u;
    // 0x4af4b4: 0xc12bb10  jal         func_4AEC40
    ctx->pc = 0x4AF4B4u;
    SET_GPR_U32(ctx, 31, 0x4AF4BCu);
    ctx->pc = 0x4AEC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEC40u, 0x4AF4B4u, 0x4AF4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF4BCu;
label_4af4bc:
    // 0x4af4bc: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x4af4bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4af4c0:
    // 0x4af4c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4af4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af4c4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4af4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4af4c8: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4af4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4af4cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4af4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4af4d0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4af4d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4af4d4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4af4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4af4d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4af4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4af4dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4af4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4af4e0: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x4AF4E0u;
    {
        const bool branch_taken_0x4af4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF4E0u;
        // 0x4af4e4: 0xa6640000  sh          $a0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af4e0) {
            ctx->pc = 0x4AF430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4af430;
        }
    }
    ctx->pc = 0x4AF4E8u;
label_4af4e8:
    // 0x4af4e8: 0x2683d680  addiu       $v1, $s4, -0x2980
    ctx->pc = 0x4af4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
    // 0x4af4ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4af4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4af4f0: 0xa4622320  sh          $v0, 0x2320($v1)
    ctx->pc = 0x4af4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8992), (uint16_t)GPR_U32(ctx, 2));
label_4af4f4:
    // 0x4af4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4af4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4af4f8:
    // 0x4af4f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4af4f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4af4fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4af4fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4af500: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4af500u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4af504: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4af504u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4af508: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4af508u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4af50c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4af50cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4af510: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4af510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4af514: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF514u;
        // 0x4af518: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF51Cu;
    // 0x4af51c: 0x0  nop
    ctx->pc = 0x4af51cu;
    // NOP
    ctx->pc = 0x4af520u;
}
