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

// Function: sub_0050A140
// Address: 0x50a140 - 0x50a238
void sub_0050A140_0x50a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A140_0x50a140");
#endif

    switch (ctx->pc) {
        case 0x50a198u: goto label_50a198;
        case 0x50a1d0u: goto label_50a1d0;
        case 0x50a1e8u: goto label_50a1e8;
        case 0x50a1f8u: goto label_50a1f8;
        case 0x50a218u: goto label_50a218;
        default: break;
    }

    ctx->pc = 0x50a140u;

    // 0x50a140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a144: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x50a144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x50a148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50a148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50a14c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x50a14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50a150: 0x2463f080  addiu       $v1, $v1, -0xF80
    ctx->pc = 0x50a150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x50a154: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x50a154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x50a158: 0x24670016  addiu       $a3, $v1, 0x16
    ctx->pc = 0x50a158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
    // 0x50a15c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x50a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x50a160: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x50a160u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8FF096u));
    // 0x50a164: 0x24664cce  addiu       $a2, $v1, 0x4CCE
    ctx->pc = 0x50a164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 19662));
    // 0x50a168: 0xa4d00000  sh          $s0, 0x0($a2)
    ctx->pc = 0x50a168u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x903D4Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903D4Eu, _value); } while (0);
    // 0x50a16c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x50a16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x50a170: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x50a170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50a174: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x50a174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x50a178: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x50a178u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x50a17c: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x50a17cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50a180: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x50a180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x50a184: 0x286500b4  slti        $a1, $v1, 0xB4
    ctx->pc = 0x50a184u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x50a188: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x50A188u;
    {
        const bool branch_taken_0x50a188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x50A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A188u;
        // 0x50a18c: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a188) {
            ctx->pc = 0x50A1B0u;
            goto label_50a1b0;
        }
    }
    ctx->pc = 0x50A190u;
    // 0x50a190: 0xc124620  jal         func_491880
    ctx->pc = 0x50A190u;
    SET_GPR_U32(ctx, 31, 0x50A198u);
    ctx->pc = 0x50A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A190u;
    // 0x50a194: 0xa4c00000  sh          $zero, 0x0($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x50A190u, 0x50A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A198u;
label_50a198:
    // 0x50a198: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x50a198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x50a19c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x50a19cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x50a1a0: 0xa430e818  sh          $s0, -0x17E8($at)
    ctx->pc = 0x50a1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961176), (uint16_t)GPR_U32(ctx, 16));
    // 0x50a1a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x50A1A4u;
    {
        const bool branch_taken_0x50a1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A1A4u;
        // 0x50a1a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a1a4) {
            ctx->pc = 0x50A1C0u;
            goto label_50a1c0;
        }
    }
    ctx->pc = 0x50A1ACu;
    // 0x50a1ac: 0x0  nop
    ctx->pc = 0x50a1acu;
    // NOP
label_50a1b0:
    // 0x50a1b0: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x50A1B0u;
    {
        const bool branch_taken_0x50a1b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x50a1b0) {
            ctx->pc = 0x50A1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50A1B0u;
            // 0x50a1b4: 0xa4c00000  sh          $zero, 0x0($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50A1B8u;
            goto label_50a1b8;
        }
    }
    ctx->pc = 0x50A1B8u;
label_50a1b8:
    // 0x50a1b8: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x50a1b8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50a1bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50a1bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_50a1c0:
    // 0x50a1c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x50a1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50a1c4: 0x8141c20  j           func_507080
    ctx->pc = 0x50A1C4u;
    ctx->pc = 0x50A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A1C4u;
    // 0x50a1c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x507080u;
    sub_00507080_0x507080(rdram, ctx, runtime); return;
    ctx->pc = 0x50A1CCu;
    // 0x50a1cc: 0x0  nop
    ctx->pc = 0x50a1ccu;
    // NOP
label_50a1d0:
    // 0x50a1d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a1d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x50a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x50a1d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50a1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50a1dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x50a1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x50a1e0: 0xc14417a  jal         func_5105E8
    ctx->pc = 0x50A1E0u;
    SET_GPR_U32(ctx, 31, 0x50A1E8u);
    ctx->pc = 0x50A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A1E0u;
    // 0x50a1e4: 0x3c100090  lui         $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)144 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5105E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5105E8u, 0x50A1E0u, 0x50A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A1E8u;
label_50a1e8:
    // 0x50a1e8: 0x2610f080  addiu       $s0, $s0, -0xF80
    ctx->pc = 0x50a1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963328));
    // 0x50a1ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50a1f0: 0xc141c20  jal         func_507080
    ctx->pc = 0x50A1F0u;
    SET_GPR_U32(ctx, 31, 0x50A1F8u);
    ctx->pc = 0x50A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A1F0u;
    // 0x50a1f4: 0xa6024cce  sh          $v0, 0x4CCE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 19662), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x507080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507080u, 0x50A1F0u, 0x50A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A1F8u;
label_50a1f8:
    // 0x50a1f8: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x50a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x50a1fc: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x50a1fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x50a200: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x50a200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x50a204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50a204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a208: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x50a208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50a20c: 0x8144432  j           func_5110C8
    ctx->pc = 0x50A20Cu;
    ctx->pc = 0x50A210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A20Cu;
    // 0x50a210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5110C8u;
    sub_005110C8_0x5110c8(rdram, ctx, runtime); return;
    ctx->pc = 0x50A214u;
    // 0x50a214: 0x0  nop
    ctx->pc = 0x50a214u;
    // NOP
label_50a218:
    // 0x50a218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a21c: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x50a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x50a220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50a224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50a228: 0xa462f116  sh          $v0, -0xEEA($v1)
    ctx->pc = 0x50a228u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8FF116u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8FF116u, _value); } while (0);
    // 0x50a22c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a230: 0x8142c02  j           func_50B008
    ctx->pc = 0x50A230u;
    ctx->pc = 0x50A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A230u;
    // 0x50a234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50B008u;
    sub_0050B008_0x50b008(rdram, ctx, runtime); return;
    ctx->pc = 0x50A238u;
}
