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

// Function: sub_0049D4B0
// Address: 0x49d4b0 - 0x49d810
void sub_0049D4B0_0x49d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049D4B0_0x49d4b0");
#endif

    switch (ctx->pc) {
        case 0x49d538u: goto label_49d538;
        case 0x49d588u: goto label_49d588;
        case 0x49d690u: goto label_49d690;
        case 0x49d730u: goto label_49d730;
        case 0x49d7d0u: goto label_49d7d0;
        default: break;
    }

    ctx->pc = 0x49d4b0u;

    // 0x49d4b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49d4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x49d4b4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49d4b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x49d4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49d4bc: 0x24450b9c  addiu       $a1, $v0, 0xB9C
    ctx->pc = 0x49d4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2972));
    // 0x49d4c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x49d4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x49d4c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x49d4c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d4c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x49d4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x49d4cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49d4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49d4d0: 0x2672013c  addiu       $s2, $s3, 0x13C
    ctx->pc = 0x49d4d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 316));
    // 0x49d4d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49d4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49d4d8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x49d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x49d4dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x49d4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x49d4e0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x49d4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x49d4e4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x49d4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x49d4e8: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x49d4e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x49d4ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B9Cu));
    // 0x49d4f0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49d4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49d4f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d4f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49d4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49d4fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49d500: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d504: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x49d504u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49d508: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49d508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49d50c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49d50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49d510: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49d510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49d514: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49d514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49d518: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x49d518u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49d51c: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x49D51Cu;
    {
        const bool branch_taken_0x49d51c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x49D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D51Cu;
        // 0x49d520: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d51c) {
            ctx->pc = 0x49D5B0u;
            goto label_49d5b0;
        }
    }
    ctx->pc = 0x49D524u;
    // 0x49d524: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x49d524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d528: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x49d528u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49d52c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x49d52cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49d530: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x49d530u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x49d534: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x49d534u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49d538:
    // 0x49d538: 0x1076000d  beq         $v1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x49D538u;
    {
        const bool branch_taken_0x49d538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x49D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D538u;
        // 0x49d53c: 0x24740001  addiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d538) {
            ctx->pc = 0x49D570u;
            goto label_49d570;
        }
    }
    ctx->pc = 0x49D540u;
    // 0x49d540: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x49d540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x49d544: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x49D544u;
    {
        const bool branch_taken_0x49d544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d544) {
            ctx->pc = 0x49D560u;
            goto label_49d560;
        }
    }
    ctx->pc = 0x49D54Cu;
    // 0x49d54c: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x49D54Cu;
    {
        const bool branch_taken_0x49d54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d54c) {
            ctx->pc = 0x49D550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49D54Cu;
            // 0x49d550: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49D57Cu;
            goto label_49d57c;
        }
    }
    ctx->pc = 0x49D554u;
    // 0x49d554: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x49D554u;
    {
        const bool branch_taken_0x49d554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d554) {
            ctx->pc = 0x49D580u;
            goto label_49d580;
        }
    }
    ctx->pc = 0x49D55Cu;
    // 0x49d55c: 0x0  nop
    ctx->pc = 0x49d55cu;
    // NOP
label_49d560:
    // 0x49d560: 0x50750006  beql        $v1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x49D560u;
    {
        const bool branch_taken_0x49d560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x49d560) {
            ctx->pc = 0x49D564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49D560u;
            // 0x49d564: 0x86620144  lh          $v0, 0x144($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49D57Cu;
            goto label_49d57c;
        }
    }
    ctx->pc = 0x49D568u;
    // 0x49d568: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x49D568u;
    {
        const bool branch_taken_0x49d568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d568) {
            ctx->pc = 0x49D580u;
            goto label_49d580;
        }
    }
    ctx->pc = 0x49D570u;
label_49d570:
    // 0x49d570: 0x8e620144  lw          $v0, 0x144($s3)
    ctx->pc = 0x49d570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 324)));
    // 0x49d574: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x49d574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x49d578: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49d578u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_49d57c:
    // 0x49d57c: 0xa662000c  sh          $v0, 0xC($s3)
    ctx->pc = 0x49d57cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 2));
label_49d580:
    // 0x49d580: 0xc128b10  jal         func_4A2C40
    ctx->pc = 0x49D580u;
    SET_GPR_U32(ctx, 31, 0x49D588u);
    ctx->pc = 0x49D584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D580u;
    // 0x49d584: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2C40u, 0x49D580u, 0x49D588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D588u;
label_49d588:
    // 0x49d588: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x49d588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49d58c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x49d58cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49d590: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49d590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49d594: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x49d594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x49d598: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x49d598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x49d59c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49d59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49d5a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49d5a4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x49d5a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49d5a8: 0x461ffe3  bgez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x49D5A8u;
    {
        const bool branch_taken_0x49d5a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x49D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D5A8u;
        // 0x49d5ac: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d5a8) {
            ctx->pc = 0x49D538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d538;
        }
    }
    ctx->pc = 0x49D5B0u;
label_49d5b0:
    // 0x49d5b0: 0x8e630124  lw          $v1, 0x124($s3)
    ctx->pc = 0x49d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
    // 0x49d5b4: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x49d5b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x49d5b8: 0x26310b84  addiu       $s1, $s1, 0xB84
    ctx->pc = 0x49d5b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2948));
    // 0x49d5bc: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x49d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x49d5c0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49d5c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0B84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B84u, _value); } while (0);
    // 0x49d5c4: 0x26650014  addiu       $a1, $s3, 0x14
    ctx->pc = 0x49d5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x49d5c8: 0x26660018  addiu       $a2, $s3, 0x18
    ctx->pc = 0x49d5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x49d5cc: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x49d5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x49d5d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49d5d4: 0x26670118  addiu       $a3, $s3, 0x118
    ctx->pc = 0x49d5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 280));
    // 0x49d5d8: 0x2668011a  addiu       $t0, $s3, 0x11A
    ctx->pc = 0x49d5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 282));
    // 0x49d5dc: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x49d5dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x49d5e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49d5e4: 0x26520b88  addiu       $s2, $s2, 0xB88
    ctx->pc = 0x49d5e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2952));
    // 0x49d5e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49d5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49d5ec: 0x8e630128  lw          $v1, 0x128($s3)
    ctx->pc = 0x49d5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
    // 0x49d5f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49d5f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0B84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B84u, _value); } while (0);
    // 0x49d5f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49d5f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49d5fc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49d5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49d600: 0x8e63012c  lw          $v1, 0x12C($s3)
    ctx->pc = 0x49d600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
    // 0x49d604: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49d604u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0B84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B84u, _value); } while (0);
    // 0x49d608: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x49d608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49d60c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49d610: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x49d610u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x49d614: 0x96630130  lhu         $v1, 0x130($s3)
    ctx->pc = 0x49d614u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x49d618: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x49d618u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0B84u));
    // 0x49d61c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49d620: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x49d620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x49d624: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d628: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49d628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49d62c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x49d62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x49d630: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49d630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49d634: 0x86620132  lh          $v0, 0x132($s3)
    ctx->pc = 0x49d634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 306)));
    // 0x49d638: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49d638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49d63c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49d63cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49d640: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x49d640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x49d644: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49d644u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49d648: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x49d648u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49d64c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49d650: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49d650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49d654: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x49d654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x49d658: 0x50a024  and         $s4, $v0, $s0
    ctx->pc = 0x49d658u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x49d65c: 0x3683ffff  ori         $v1, $s4, 0xFFFF
    ctx->pc = 0x49d65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x49d660: 0x65a024  and         $s4, $v1, $a1
    ctx->pc = 0x49d660u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x49d664: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x49d664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x49d668: 0x901024  and         $v0, $a0, $s0
    ctx->pc = 0x49d668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x49d66c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x49d66cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x49d670: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49d670u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49d674: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x49d674u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49d678: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x49d678u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d67c: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x49d67cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49d680: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x49d680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d684: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x49d684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x49d688: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49D688u;
    SET_GPR_U32(ctx, 31, 0x49D690u);
    ctx->pc = 0x49D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D688u;
    // 0x49d68c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49D688u, 0x49D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D690u;
label_49d690:
    // 0x49d690: 0x2667011c  addiu       $a3, $s3, 0x11C
    ctx->pc = 0x49d690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 284));
    // 0x49d694: 0x501824  and         $v1, $v0, $s0
    ctx->pc = 0x49d694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x49d698: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x49d698u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x49d69c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x49d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x49d6a0: 0x2668011e  addiu       $t0, $s3, 0x11E
    ctx->pc = 0x49d6a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 286));
    // 0x49d6a4: 0xa6630022  sh          $v1, 0x22($s3)
    ctx->pc = 0x49d6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x49d6a8: 0x2903025  or          $a2, $s4, $s0
    ctx->pc = 0x49d6a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) | GPR_U64(ctx, 16));
    // 0x49d6ac: 0x96620134  lhu         $v0, 0x134($s3)
    ctx->pc = 0x49d6acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 308)));
    // 0x49d6b0: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x49d6b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49d6b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49d6b8: 0xa6630024  sh          $v1, 0x24($s3)
    ctx->pc = 0x49d6b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x49d6bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49d6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49d6c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x49d6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d6c4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x49d6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x49d6c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49d6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49d6cc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x49d6d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d6d4: 0x86620136  lh          $v0, 0x136($s3)
    ctx->pc = 0x49d6d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 310)));
    // 0x49d6d8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49d6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49d6dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49d6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49d6e0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x49d6e4: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49d6e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49d6e8: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x49d6e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49d6ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49d6f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49d6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49d6f4: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x49d6f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x49d6f8: 0xc2a024  and         $s4, $a2, $v0
    ctx->pc = 0x49d6f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x49d6fc: 0x3684ffff  ori         $a0, $s4, 0xFFFF
    ctx->pc = 0x49d6fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x49d700: 0x85a024  and         $s4, $a0, $a1
    ctx->pc = 0x49d700u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x49d704: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x49d704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x49d708: 0x701024  and         $v0, $v1, $s0
    ctx->pc = 0x49d708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x49d70c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49d70cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x49d710: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49d710u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49d714: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x49d714u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49d718: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x49d718u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d71c: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x49d71cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49d720: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x49d720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d724: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x49d724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x49d728: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49D728u;
    SET_GPR_U32(ctx, 31, 0x49D730u);
    ctx->pc = 0x49D72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D728u;
    // 0x49d72c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49D728u, 0x49D730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D730u;
label_49d730:
    // 0x49d730: 0x2904025  or          $t0, $s4, $s0
    ctx->pc = 0x49d730u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) | GPR_U64(ctx, 16));
    // 0x49d734: 0x501824  and         $v1, $v0, $s0
    ctx->pc = 0x49d734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x49d738: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x49d738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x49d73c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x49d73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x49d740: 0x26660120  addiu       $a2, $s3, 0x120
    ctx->pc = 0x49d740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x49d744: 0xa6630026  sh          $v1, 0x26($s3)
    ctx->pc = 0x49d744u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x49d748: 0x26670122  addiu       $a3, $s3, 0x122
    ctx->pc = 0x49d748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 290));
    // 0x49d74c: 0x96620138  lhu         $v0, 0x138($s3)
    ctx->pc = 0x49d74cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 312)));
    // 0x49d750: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x49d750u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49d754: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49d754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49d758: 0xa6630028  sh          $v1, 0x28($s3)
    ctx->pc = 0x49d758u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x49d75c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49d75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49d760: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x49d760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d764: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x49d764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x49d768: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49d768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49d76c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x49d770: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d774: 0x8662013a  lh          $v0, 0x13A($s3)
    ctx->pc = 0x49d774u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 314)));
    // 0x49d778: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49d778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49d77c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49d77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49d780: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49d780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x49d784: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x49d784u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49d788: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x49d788u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49d78c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49d790: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49d790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49d794: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x49d794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x49d798: 0x102a024  and         $s4, $t0, $v0
    ctx->pc = 0x49d798u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x49d79c: 0x3684ffff  ori         $a0, $s4, 0xFFFF
    ctx->pc = 0x49d79cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x49d7a0: 0x85a024  and         $s4, $a0, $a1
    ctx->pc = 0x49d7a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x49d7a4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x49d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x49d7a8: 0x701024  and         $v0, $v1, $s0
    ctx->pc = 0x49d7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x49d7ac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x49d7b0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49d7b4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x49d7b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49d7b8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x49d7b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d7bc: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x49d7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49d7c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x49d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d7c4: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x49d7c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x49d7c8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49D7C8u;
    SET_GPR_U32(ctx, 31, 0x49D7D0u);
    ctx->pc = 0x49D7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D7C8u;
    // 0x49d7cc: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49D7C8u, 0x49D7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D7D0u;
label_49d7d0:
    // 0x49d7d0: 0x508024  and         $s0, $v0, $s0
    ctx->pc = 0x49d7d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x49d7d4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x49d7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x49d7d8: 0x108402  srl         $s0, $s0, 16
    ctx->pc = 0x49d7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x49d7dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49d7dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49d7e0: 0xa670002a  sh          $s0, 0x2A($s3)
    ctx->pc = 0x49d7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 16));
    // 0x49d7e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x49d7e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49d7e8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x49d7e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49d7ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49d7ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d7f0: 0xa662002c  sh          $v0, 0x2C($s3)
    ctx->pc = 0x49d7f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x49d7f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49d7f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49d7f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49d7f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49d7fc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x49d7fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49d800: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x49d800u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49d804: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x49d804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49d808: 0x3e00008  jr          $ra
    ctx->pc = 0x49D808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D808u;
        // 0x49d80c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49D810u;
}
