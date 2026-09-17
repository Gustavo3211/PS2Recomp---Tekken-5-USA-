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

// Function: sub_004B20A0
// Address: 0x4b20a0 - 0x4b2128
void sub_004B20A0_0x4b20a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B20A0_0x4b20a0");
#endif

    switch (ctx->pc) {
        case 0x4b20a0u: goto label_4b20a0;
        case 0x4b20a4u: goto label_4b20a4;
        case 0x4b20a8u: goto label_4b20a8;
        case 0x4b20acu: goto label_4b20ac;
        case 0x4b20b0u: goto label_4b20b0;
        case 0x4b20b4u: goto label_4b20b4;
        case 0x4b20b8u: goto label_4b20b8;
        case 0x4b20bcu: goto label_4b20bc;
        case 0x4b20c0u: goto label_4b20c0;
        case 0x4b20c4u: goto label_4b20c4;
        case 0x4b20c8u: goto label_4b20c8;
        case 0x4b20ccu: goto label_4b20cc;
        case 0x4b20d0u: goto label_4b20d0;
        case 0x4b20d4u: goto label_4b20d4;
        case 0x4b20d8u: goto label_4b20d8;
        case 0x4b20dcu: goto label_4b20dc;
        case 0x4b20e0u: goto label_4b20e0;
        case 0x4b20e4u: goto label_4b20e4;
        case 0x4b20e8u: goto label_4b20e8;
        case 0x4b20ecu: goto label_4b20ec;
        case 0x4b20f0u: goto label_4b20f0;
        case 0x4b20f4u: goto label_4b20f4;
        case 0x4b20f8u: goto label_4b20f8;
        case 0x4b20fcu: goto label_4b20fc;
        case 0x4b2100u: goto label_4b2100;
        case 0x4b2104u: goto label_4b2104;
        case 0x4b2108u: goto label_4b2108;
        case 0x4b210cu: goto label_4b210c;
        case 0x4b2110u: goto label_4b2110;
        case 0x4b2114u: goto label_4b2114;
        case 0x4b2118u: goto label_4b2118;
        case 0x4b211cu: goto label_4b211c;
        case 0x4b2120u: goto label_4b2120;
        case 0x4b2124u: goto label_4b2124;
        default: break;
    }

    ctx->pc = 0x4b20a0u;

label_4b20a0:
    // 0x4b20a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b20a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b20a4:
    // 0x4b20a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b20a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b20a8:
    // 0x4b20a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b20a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b20ac:
    // 0x4b20ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b20acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4b20b0:
    // 0x4b20b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b20b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b20b4:
    // 0x4b20b4: 0xc1232f2  jal         func_48CBC8
label_4b20b8:
    if (ctx->pc == 0x4B20B8u) {
        ctx->pc = 0x4B20B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B20B4u;
        // 0x4b20b8: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B20BCu;
        goto label_4b20bc;
    }
    ctx->pc = 0x4B20B4u;
    SET_GPR_U32(ctx, 31, 0x4B20BCu);
    ctx->pc = 0x4B20B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B20B4u;
    // 0x4b20b8: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4B20B4u, 0x4B20BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B20BCu;
label_4b20bc:
    // 0x4b20bc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b20bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4b20c0:
    // 0x4b20c0: 0xac620d64  sw          $v0, 0xD64($v1)
    ctx->pc = 0x4b20c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3428), GPR_U32(ctx, 2));
label_4b20c4:
    // 0x4b20c4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4b20c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4b20c8:
    // 0x4b20c8: 0x442000c  bltzl       $v0, . + 4 + (0xC << 2)
label_4b20cc:
    if (ctx->pc == 0x4B20CCu) {
        ctx->pc = 0x4B20CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B20C8u;
        // 0x4b20cc: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B20D0u;
        goto label_4b20d0;
    }
    ctx->pc = 0x4B20C8u;
    {
        const bool branch_taken_0x4b20c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4b20c8) {
            ctx->pc = 0x4B20CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B20C8u;
            // 0x4b20cc: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B20FCu;
            goto label_4b20fc;
        }
    }
    ctx->pc = 0x4B20D0u;
label_4b20d0:
    // 0x4b20d0: 0xc12b642  jal         func_4AD908
label_4b20d4:
    if (ctx->pc == 0x4B20D4u) {
        ctx->pc = 0x4B20D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B20D0u;
        // 0x4b20d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B20D8u;
        goto label_4b20d8;
    }
    ctx->pc = 0x4B20D0u;
    SET_GPR_U32(ctx, 31, 0x4B20D8u);
    ctx->pc = 0x4B20D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B20D0u;
    // 0x4b20d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4B20D0u, 0x4B20D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B20D8u;
label_4b20d8:
    // 0x4b20d8: 0xa600016a  sh          $zero, 0x16A($s0)
    ctx->pc = 0x4b20d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 362), (uint16_t)GPR_U32(ctx, 0));
label_4b20dc:
    // 0x4b20dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b20e0:
    // 0x4b20e0: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4b20e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
label_4b20e4:
    // 0x4b20e4: 0xa60201b6  sh          $v0, 0x1B6($s0)
    ctx->pc = 0x4b20e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 2));
label_4b20e8:
    // 0x4b20e8: 0xa600011a  sh          $zero, 0x11A($s0)
    ctx->pc = 0x4b20e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 282), (uint16_t)GPR_U32(ctx, 0));
label_4b20ec:
    // 0x4b20ec: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b20ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4b20f0:
    // 0x4b20f0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4b20f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4b20f4:
    // 0x4b20f4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4b20f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4b20f8:
    // 0x4b20f8: 0x960201bc  lhu         $v0, 0x1BC($s0)
    ctx->pc = 0x4b20f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4b20fc:
    // 0x4b20fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4b2100:
    // 0x4b2100: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4b2100u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4b2104:
    // 0x4b2104: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x4b2104u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4b2108:
    // 0x4b2108: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
label_4b210c:
    if (ctx->pc == 0x4B210Cu) {
        ctx->pc = 0x4B210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2108u;
        // 0x4b210c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2110u;
        goto label_4b2110;
    }
    ctx->pc = 0x4B2108u;
    {
        const bool branch_taken_0x4b2108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2108) {
            ctx->pc = 0x4B210Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2108u;
            // 0x4b210c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B21A0u;
            return;
        }
    }
    ctx->pc = 0x4B2110u;
label_4b2110:
    // 0x4b2110: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b2110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4b2114:
    // 0x4b2114: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4b2114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4b2118:
    // 0x4b2118: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b2118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b211c:
    // 0x4b211c: 0x8c63b2e0  lw          $v1, -0x4D20($v1)
    ctx->pc = 0x4b211cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947552)));
label_4b2120:
    // 0x4b2120: 0x600008  jr          $v1
label_4b2124:
    if (ctx->pc == 0x4B2124u) {
        ctx->pc = 0x4B2128u;
        goto label_fallthrough_0x4b2120;
    }
    ctx->pc = 0x4B2120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2120u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4b2120:
    ctx->pc = 0x4B2128u;
}
