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

// Function: sub_004E4380
// Address: 0x4e4380 - 0x4e4848
void sub_004E4380_0x4e4380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4380_0x4e4380");
#endif

    switch (ctx->pc) {
        case 0x4e43c4u: goto label_4e43c4;
        case 0x4e4610u: goto label_4e4610;
        case 0x4e4688u: goto label_4e4688;
        case 0x4e4690u: goto label_4e4690;
        case 0x4e46a0u: goto label_4e46a0;
        case 0x4e46b4u: goto label_4e46b4;
        case 0x4e4738u: goto label_4e4738;
        case 0x4e47d8u: goto label_4e47d8;
        default: break;
    }

    ctx->pc = 0x4e4380u;

    // 0x4e4380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e4380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e4384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e4384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e4388: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e4388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e438c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e438cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4390: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e4390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e4394: 0x267001b4  addiu       $s0, $s3, 0x1B4
    ctx->pc = 0x4e4394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    // 0x4e4398: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e4398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e439c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e439cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e43a0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e43a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e43a4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e43a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e43a8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4e43a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4e43ac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e43acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4e43b0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e43b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e43b4: 0x4420011  bltzl       $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4E43B4u;
    {
        const bool branch_taken_0x4e43b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4e43b4) {
            ctx->pc = 0x4E43B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E43B4u;
            // 0x4e43b8: 0x8e650140  lw          $a1, 0x140($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E43FCu;
            goto label_4e43fc;
        }
    }
    ctx->pc = 0x4E43BCu;
    // 0x4e43bc: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E43BCu;
    SET_GPR_U32(ctx, 31, 0x4E43C4u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E43BCu, 0x4E43C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E43C4u;
label_4e43c4:
    // 0x4e43c4: 0xa660015e  sh          $zero, 0x15E($s3)
    ctx->pc = 0x4e43c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e43c8: 0x96650012  lhu         $a1, 0x12($s3)
    ctx->pc = 0x4e43c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x4e43cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4e43ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e43d0: 0x96630016  lhu         $v1, 0x16($s3)
    ctx->pc = 0x4e43d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x4e43d4: 0x9664001a  lhu         $a0, 0x1A($s3)
    ctx->pc = 0x4e43d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x4e43d8: 0xa662000e  sh          $v0, 0xE($s3)
    ctx->pc = 0x4e43d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e43dc: 0xa665011a  sh          $a1, 0x11A($s3)
    ctx->pc = 0x4e43dcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 282), (uint16_t)GPR_U32(ctx, 5));
    // 0x4e43e0: 0xa663011e  sh          $v1, 0x11E($s3)
    ctx->pc = 0x4e43e0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 286), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e43e4: 0xa6640122  sh          $a0, 0x122($s3)
    ctx->pc = 0x4e43e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 290), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e43e8: 0xa66001b6  sh          $zero, 0x1B6($s3)
    ctx->pc = 0x4e43e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e43ec: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e43ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e43f0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e43f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e43f4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4e43f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e43f8: 0x8e650140  lw          $a1, 0x140($s3)
    ctx->pc = 0x4e43f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 320)));
label_4e43fc:
    // 0x4e43fc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e4400: 0xac4511b4  sw          $a1, 0x11B4($v0)
    ctx->pc = 0x4e4400u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F11B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11B4u, _value); } while (0);
    // 0x4e4404: 0x84a301b4  lh          $v1, 0x1B4($a1)
    ctx->pc = 0x4e4404u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 436)));
    // 0x4e4408: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4E4408u;
    {
        const bool branch_taken_0x4e4408 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4E440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4408u;
        // 0x4e440c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4408) {
            ctx->pc = 0x4E4440u;
            goto label_4e4440;
        }
    }
    ctx->pc = 0x4E4410u;
    // 0x4e4410: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e4410u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e4414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e4414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4418: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e4418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e441c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e441cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4420: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e4420u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e4424: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e4424u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e4428: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e4428u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e442c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e442cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e4430: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e4430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e4434: 0x8139308  j           func_4E4C20
    ctx->pc = 0x4E4434u;
    ctx->pc = 0x4E4438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4434u;
    // 0x4e4438: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4C20u, 0x4E4434u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E443Cu;
    // 0x4e443c: 0x0  nop
    ctx->pc = 0x4e443cu;
    // NOP
label_4e4440:
    // 0x4e4440: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e4440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4e4444: 0x84a3016a  lh          $v1, 0x16A($a1)
    ctx->pc = 0x4e4444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 362)));
    // 0x4e4448: 0x248511a0  addiu       $a1, $a0, 0x11A0
    ctx->pc = 0x4e4448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4512));
    // 0x4e444c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4e444cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4e4450: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e4450u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11A0u));
    // 0x4e4454: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4e4454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4e4458: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e4458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e445c: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x4e445cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e4460: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x4e4460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x4e4464: 0x8663016a  lh          $v1, 0x16A($s3)
    ctx->pc = 0x4e4464u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 362)));
    // 0x4e4468: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e4468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e446c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4E446Cu;
    {
        const bool branch_taken_0x4e446c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E446Cu;
        // 0x4e4470: 0x3c0a0073  lui         $t2, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e446c) {
            ctx->pc = 0x4E44A8u;
            goto label_4e44a8;
        }
    }
    ctx->pc = 0x4E4474u;
    // 0x4e4474: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e4474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4478: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e4478u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e447c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e447cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4480: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e4480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e4484: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e4484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4488: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e4488u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e448c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e448cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e4490: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e4490u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e4494: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e4494u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e4498: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e4498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e449c: 0x8139308  j           func_4E4C20
    ctx->pc = 0x4E449Cu;
    ctx->pc = 0x4E44A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E449Cu;
    // 0x4e44a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4C20u, 0x4E449Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E44A4u;
    // 0x4e44a4: 0x0  nop
    ctx->pc = 0x4e44a4u;
    // NOP
label_4e44a8:
    // 0x4e44a8: 0x2542d680  addiu       $v0, $t2, -0x2980
    ctx->pc = 0x4e44a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956672));
    // 0x4e44ac: 0x84432214  lh          $v1, 0x2214($v0)
    ctx->pc = 0x4e44acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8724)));
    // 0x4e44b0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4E44B0u;
    {
        const bool branch_taken_0x4e44b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E44B0u;
        // 0x4e44b4: 0x2676015e  addiu       $s6, $s3, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e44b0) {
            ctx->pc = 0x4E44E8u;
            goto label_4e44e8;
        }
    }
    ctx->pc = 0x4E44B8u;
    // 0x4e44b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e44b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e44bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e44bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e44c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e44c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e44c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e44c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e44c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e44c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e44cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e44ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e44d0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e44d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e44d4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e44d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e44d8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e44d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e44dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e44dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e44e0: 0x813930e  j           func_4E4C38
    ctx->pc = 0x4E44E0u;
    ctx->pc = 0x4E44E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E44E0u;
    // 0x4e44e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4C38u, 0x4E44E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E44E8u;
label_4e44e8:
    // 0x4e44e8: 0x34e3ffff  ori         $v1, $a3, 0xFFFF
    ctx->pc = 0x4e44e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e44ec: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4e44ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e44f0: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4e44f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4e44f4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e44f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e44f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e44f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e44fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e44fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e4500: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e4500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4504: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e4504u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e4508: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4e4508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4e450c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e450cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e4510: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4514: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e4514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e4518: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e4518u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e451c: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x4e451cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x4e4520: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E4520u;
    {
        const bool branch_taken_0x4e4520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E4524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4520u;
        // 0x4e4524: 0x24e811a4  addiu       $t0, $a3, 0x11A4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4520) {
            ctx->pc = 0x4E4538u;
            goto label_4e4538;
        }
    }
    ctx->pc = 0x4E4528u;
    // 0x4e4528: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e4528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e452c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4E452Cu;
    {
        const bool branch_taken_0x4e452c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E452Cu;
        // 0x4e4530: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e452c) {
            ctx->pc = 0x4E4544u;
            goto label_4e4544;
        }
    }
    ctx->pc = 0x4E4534u;
    // 0x4e4534: 0x0  nop
    ctx->pc = 0x4e4534u;
    // NOP
label_4e4538:
    // 0x4e4538: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e4538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e453c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4e453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4e4540: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4e4540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e4544:
    // 0x4e4544: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4e4544u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4e4548: 0x24f511a4  addiu       $s5, $a3, 0x11A4
    ctx->pc = 0x4e4548u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), 4516));
    // 0x4e454c: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4e454cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4e4550: 0x249211a0  addiu       $s2, $a0, 0x11A0
    ctx->pc = 0x4e4550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4512));
    // 0x4e4554: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4e4554u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e4558: 0x2557d680  addiu       $s7, $t2, -0x2980
    ctx->pc = 0x4e4558u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956672));
    // 0x4e455c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4e455cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e4560: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4e4560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4e4564: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x4e4564u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e4568: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4e4568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4e456c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e456cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4570: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4574: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4e4574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e4578: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4e4578u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4e457c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e457cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e4580: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4e4580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e4584: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4e4584u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4e4588: 0xb42825  or          $a1, $a1, $s4
    ctx->pc = 0x4e4588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
    // 0x4e458c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4e458cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4e4590: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4e4590u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4e4594: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e4594u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e4598: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x4e4598u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e459c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e45a0: 0x86e22300  lh          $v0, 0x2300($s7)
    ctx->pc = 0x4e45a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 8960)));
    // 0x4e45a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e45a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e45a8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4e45a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4e45ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e45acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e45b0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e45b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e45b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e45b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e45b8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e45b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e45bc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4e45bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4e45c0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4e45c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4e45c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e45c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e45c8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e45c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e45cc: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4e45ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e45d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4E45D0u;
    {
        const bool branch_taken_0x4e45d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E45D0u;
        // 0x4e45d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e45d0) {
            ctx->pc = 0x4E4608u;
            goto label_4e4608;
        }
    }
    ctx->pc = 0x4E45D8u;
    // 0x4e45d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e45d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e45dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e45dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e45e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e45e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e45e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e45e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e45e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e45e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e45ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e45ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e45f0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e45f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e45f4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e45f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e45f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e45f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e45fc: 0x813930e  j           func_4E4C38
    ctx->pc = 0x4E45FCu;
    ctx->pc = 0x4E4600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E45FCu;
    // 0x4e4600: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4C38u, 0x4E45FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E4604u;
    // 0x4e4604: 0x0  nop
    ctx->pc = 0x4e4604u;
    // NOP
label_4e4608:
    // 0x4e4608: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E4608u;
    SET_GPR_U32(ctx, 31, 0x4E4610u);
    ctx->pc = 0x4E460Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4608u;
    // 0x4e460c: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E4608u, 0x4E4610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4610u;
label_4e4610:
    // 0x4e4610: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e4610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e4614: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4e4614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4e4618: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e4618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e461c: 0x261011a8  addiu       $s0, $s0, 0x11A8
    ctx->pc = 0x4e461cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4520));
    // 0x4e4620: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4624: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4e4624u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4e4628: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e4628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e462c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e462cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4630: 0x263111b0  addiu       $s1, $s1, 0x11B0
    ctx->pc = 0x4e4630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4528));
    // 0x4e4634: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e4634u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e4638: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4e4638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e463c: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x4e463cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x4e4640: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e4640u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F11B0u));
    // 0x4e4644: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4e4644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4e4648: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e4648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e464c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e464cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4650: 0x942024  and         $a0, $a0, $s4
    ctx->pc = 0x4e4650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 20));
    // 0x4e4654: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e4654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e4658: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e4658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e465c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4e465cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4e4660: 0xb42824  and         $a1, $a1, $s4
    ctx->pc = 0x4e4660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 20));
    // 0x4e4664: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4e4664u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e4668: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4e4668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x4e466c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4e466cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4e4670: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4674: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4e4674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4e4678: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e4678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e467c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4e467cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4e4680: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E4680u;
    SET_GPR_U32(ctx, 31, 0x4E4688u);
    ctx->pc = 0x4E4684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4680u;
    // 0x4e4684: 0xae250000  sw          $a1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E4680u, 0x4E4688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4688u;
label_4e4688:
    // 0x4e4688: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4E4688u;
    SET_GPR_U32(ctx, 31, 0x4E4690u);
    ctx->pc = 0x4E468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4688u;
    // 0x4e468c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4E4688u, 0x4E4690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4690u;
label_4e4690:
    // 0x4e4690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e4690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4694: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4e4694u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4e4698: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E4698u;
    SET_GPR_U32(ctx, 31, 0x4E46A0u);
    ctx->pc = 0x4E469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4698u;
    // 0x4e469c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E4698u, 0x4E46A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E46A0u;
label_4e46a0:
    // 0x4e46a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e46a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e46a4: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x4e46a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e46a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4e46a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e46ac: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4E46ACu;
    SET_GPR_U32(ctx, 31, 0x4E46B4u);
    ctx->pc = 0x4E46B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E46ACu;
    // 0x4e46b0: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4E46ACu, 0x4E46B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E46B4u;
label_4e46b4:
    // 0x4e46b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e46b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e46b8: 0x8664011a  lh          $a0, 0x11A($s3)
    ctx->pc = 0x4e46b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 282)));
    // 0x4e46bc: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x4e46bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x4e46c0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e46c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e46c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e46c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e46c8: 0x26660018  addiu       $a2, $s3, 0x18
    ctx->pc = 0x4e46c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x4e46cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4e46ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4e46d0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4e46d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4e46d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e46d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e46d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e46d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e46dc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e46dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e46e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e46e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e46e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e46e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e46e8: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4e46e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4e46ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e46ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e46f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e46f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e46f4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e46f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e46f8: 0x86630122  lh          $v1, 0x122($s3)
    ctx->pc = 0x4e46f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 290)));
    // 0x4e46fc: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x4e46fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e4700: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e4700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e4704: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4e4704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4e4708: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x4e4708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x4e470c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e470cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e4710: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4e4710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4e4714: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e4714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4e4718: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4e4718u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e471c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e471cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e4720: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e4720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e4724: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e4724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4728: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4e4728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4e472c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e472cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e4730: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E4730u;
    SET_GPR_U32(ctx, 31, 0x4E4738u);
    ctx->pc = 0x4E4734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4730u;
    // 0x4e4734: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E4730u, 0x4E4738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4738u;
label_4e4738:
    // 0x4e4738: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e4738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e473c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4e473cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4e4740: 0x26660014  addiu       $a2, $s3, 0x14
    ctx->pc = 0x4e4740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x4e4744: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e4744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e4748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e474c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e474cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4750: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e4750u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e4754: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e4754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4758: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e4758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e475c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x4e475cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x4e4760: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4e4760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4e4764: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4768: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e4768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e476c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e476cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4770: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4e4770u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e4774: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x4e4774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x4e4778: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4e4778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4e477c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e477cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4780: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e4780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e4784: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e4784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4788: 0x8665011e  lh          $a1, 0x11E($s3)
    ctx->pc = 0x4e4788u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 286)));
    // 0x4e478c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4e478cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e4790: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4e4790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4e4794: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4e4794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4e4798: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e479c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e479cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e47a0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e47a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e47a4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4e47a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e47a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e47a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e47ac: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4e47acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4e47b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e47b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e47b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e47b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e47b8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4e47b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4e47bc: 0x86c50000  lh          $a1, 0x0($s6)
    ctx->pc = 0x4e47bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e47c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4e47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e47c4: 0xb42825  or          $a1, $a1, $s4
    ctx->pc = 0x4e47c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
    // 0x4e47c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e47c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e47cc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4e47ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4e47d0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E47D0u;
    SET_GPR_U32(ctx, 31, 0x4E47D8u);
    ctx->pc = 0x4E47D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E47D0u;
    // 0x4e47d4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E47D0u, 0x4E47D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E47D8u;
label_4e47d8:
    // 0x4e47d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4e47d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e47dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4e47dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e47e0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x4e47e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4e47e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e47e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e47e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e47e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e47ec: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4e47ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4e47f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e47f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e47f4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x4e47f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x4e47f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e47f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e47fc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4e47fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4e4800: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e4800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e4804: 0x866301be  lh          $v1, 0x1BE($s3)
    ctx->pc = 0x4e4804u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 446)));
    // 0x4e4808: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e4808u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e480c: 0x3280b  movn        $a1, $zero, $v1
    ctx->pc = 0x4e480cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x4e4810: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e4810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e4814: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4e4814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4e4818: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4e4818u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4e481c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4e481cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4e4820: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e4820u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e4824: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4e4824u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4e4828: 0xae620128  sw          $v0, 0x128($s3)
    ctx->pc = 0x4e4828u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 296), GPR_U32(ctx, 2));
    // 0x4e482c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e482cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4830: 0xa6e6232c  sh          $a2, 0x232C($s7)
    ctx->pc = 0x4e4830u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 9004), (uint16_t)GPR_U32(ctx, 6));
    // 0x4e4834: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e4834u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e4838: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e4838u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e483c: 0x813d772  j           func_4F5DC8
    ctx->pc = 0x4E483Cu;
    ctx->pc = 0x4E4840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E483Cu;
    // 0x4e4840: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    sub_004F5DC8_0x4f5dc8(rdram, ctx, runtime); return;
    ctx->pc = 0x4E4844u;
    // 0x4e4844: 0x0  nop
    ctx->pc = 0x4e4844u;
    // NOP
    ctx->pc = 0x4e4848u;
}
