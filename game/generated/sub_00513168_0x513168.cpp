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

// Function: sub_00513168
// Address: 0x513168 - 0x513260
void sub_00513168_0x513168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00513168_0x513168");
#endif

    switch (ctx->pc) {
        case 0x513194u: goto label_513194;
        case 0x513258u: goto label_513258;
        default: break;
    }

    ctx->pc = 0x513168u;

    // 0x513168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x513168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51316c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x51316cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x513170: 0x58c00  sll         $s1, $a1, 16
    ctx->pc = 0x513170u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x513174: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x513174u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x513178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x513178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x51317c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x51317cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x513180: 0x32310fff  andi        $s1, $s1, 0xFFF
    ctx->pc = 0x513180u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4095);
    // 0x513184: 0x48400  sll         $s0, $a0, 16
    ctx->pc = 0x513184u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x513188: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x513188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51318c: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x51318Cu;
    SET_GPR_U32(ctx, 31, 0x513194u);
    ctx->pc = 0x513190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x51318Cu;
    // 0x513190: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x51318Cu, 0x513194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513194u;
label_513194:
    // 0x513194: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x513194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x513198: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x513198u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x51319c: 0x2484f040  addiu       $a0, $a0, -0xFC0
    ctx->pc = 0x51319cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963264));
    // 0x5131a0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x5131a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x5131a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x5131a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5131a8: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x5131a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x5131ac: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x5131acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x5131b0: 0x2258825  or          $s1, $s1, $a1
    ctx->pc = 0x5131b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    // 0x5131b4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x5131b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x5131b8: 0x3042001e  andi        $v0, $v0, 0x1E
    ctx->pc = 0x5131b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30);
    // 0x5131bc: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x5131bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x5131c0: 0x22842  srl         $a1, $v0, 1
    ctx->pc = 0x5131c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x5131c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5131c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5131c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5131c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5131cc: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x5131ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x5131d0: 0x28a60002  slti        $a2, $a1, 0x2
    ctx->pc = 0x5131d0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x5131d4: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x5131D4u;
    {
        const bool branch_taken_0x5131d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x5131D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5131D4u;
        // 0x5131d8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5131d4) {
            ctx->pc = 0x513218u;
            goto label_513218;
        }
    }
    ctx->pc = 0x5131DCu;
    // 0x5131dc: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x5131DCu;
    {
        const bool branch_taken_0x5131dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x5131dc) {
            ctx->pc = 0x5131E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5131DCu;
            // 0x5131e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5131F8u;
            goto label_5131f8;
        }
    }
    ctx->pc = 0x5131E4u;
    // 0x5131e4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x5131E4u;
    {
        const bool branch_taken_0x5131e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x5131E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5131E4u;
        // 0x5131e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5131e4) {
            ctx->pc = 0x513208u;
            goto label_513208;
        }
    }
    ctx->pc = 0x5131ECu;
    // 0x5131ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x5131ECu;
    {
        const bool branch_taken_0x5131ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5131F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5131ECu;
        // 0x5131f0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5131ec) {
            ctx->pc = 0x513240u;
            goto label_513240;
        }
    }
    ctx->pc = 0x5131F4u;
    // 0x5131f4: 0x0  nop
    ctx->pc = 0x5131f4u;
    // NOP
label_5131f8:
    // 0x5131f8: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x5131F8u;
    {
        const bool branch_taken_0x5131f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x5131FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5131F8u;
        // 0x5131fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5131f8) {
            ctx->pc = 0x513230u;
            goto label_513230;
        }
    }
    ctx->pc = 0x513200u;
    // 0x513200: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x513200u;
    {
        const bool branch_taken_0x513200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513200u;
        // 0x513204: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513200) {
            ctx->pc = 0x513240u;
            goto label_513240;
        }
    }
    ctx->pc = 0x513208u;
label_513208:
    // 0x513208: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x513208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x51320c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51320cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x513210: 0x8144c42  j           func_513108
    ctx->pc = 0x513210u;
    ctx->pc = 0x513214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513210u;
    // 0x513214: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513108u, 0x513210u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x513218u;
label_513218:
    // 0x513218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x513218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51321c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x51321cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x513220: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x513220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x513224: 0x8144c4a  j           func_513128
    ctx->pc = 0x513224u;
    ctx->pc = 0x513228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513224u;
    // 0x513228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513128u, 0x513224u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x51322Cu;
    // 0x51322c: 0x0  nop
    ctx->pc = 0x51322cu;
    // NOP
label_513230:
    // 0x513230: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x513230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x513234: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x513234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x513238: 0x8144c52  j           func_513148
    ctx->pc = 0x513238u;
    ctx->pc = 0x51323Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513238u;
    // 0x51323c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513148u, 0x513238u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x513240u;
label_513240:
    // 0x513240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x513240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x513244: 0x3e00008  jr          $ra
    ctx->pc = 0x513244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x513248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513244u;
        // 0x513248: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x513244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x51324Cu;
    // 0x51324c: 0x0  nop
    ctx->pc = 0x51324cu;
    // NOP
    // 0x513250: 0x3e00008  jr          $ra
    ctx->pc = 0x513250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x513250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x513258u;
label_513258:
    // 0x513258: 0x3e00008  jr          $ra
    ctx->pc = 0x513258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x513258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x513260u;
}
